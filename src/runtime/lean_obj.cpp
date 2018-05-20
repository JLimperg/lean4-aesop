/*
Copyright (c) 2018 Microsoft Corporation. All rights reserved.
Released under Apache 2.0 license as described in the file LICENSE.

Author: Leonardo de Moura
*/
#include <iostream>
#include <string>
#include "runtime/lean_obj.h"
#include "runtime/utf8.h"

namespace lean {
size_t obj_byte_size(object * o) {
    switch (get_kind(o)) {
    case object_kind::Constructor:     return cnstr_byte_size(o);
    case object_kind::Closure:         return closure_byte_size(o);
    case object_kind::Array:           return array_byte_size(o);
    case object_kind::ScalarArray:     return sarray_byte_size(o);
    case object_kind::MPZ:             return sizeof(mpz_object);
    case object_kind::External:        lean_unreachable();
    }
    lean_unreachable();
}

size_t obj_header_size(object * o) {
    switch (get_kind(o)) {
    case object_kind::Constructor:     return sizeof(constructor);
    case object_kind::Closure:         return sizeof(closure);
    case object_kind::Array:           return sizeof(array);
    case object_kind::ScalarArray:     return sizeof(sarray);
    case object_kind::MPZ:             return sizeof(mpz_object);
    case object_kind::External:        lean_unreachable();
    }
    lean_unreachable();
}

/* We use the field m_rc to implement a linked list of lean objects to be deleted.
   This hack is safe because m_rc has type uintptr_t. */

static_assert(sizeof(atomic<rc_type>) == sizeof(object*),  "unexpected atomic<rc_type> size, the object GC assumes these two types have the same size"); // NOLINT

inline object * get_next(object * o) {
    lean_assert(o == static_cast<void*>(&(o->m_rc))); // The object GC relies on the fact that the first field of a structure is stored at offset 0
    return *reinterpret_cast<object**>(o);
}

inline void set_next(object * o, object * n) {
    lean_assert(o == static_cast<void*>(&(o->m_rc))); // The object GC relies on the fact that the first field of a structure is stored at offset 0
    *reinterpret_cast<object**>(o) = n;
}

inline void push_back(object * & todo, object * v) {
    set_next(v, todo);
    todo = v;
}

inline object * pop_back(object * & todo) {
    object * r = todo;
    todo = get_next(todo);
    return r;
}

inline void dec_ref(object * o, object* & todo) {
    if (!is_scalar(o) && dec_ref_core(o))
        push_back(todo, o);
}

void del(object * o) {
    object * todo = nullptr;
    while (true) {
        switch (get_kind(o)) {
        case object_kind::Constructor: {
            object ** it  = cnstr_obj_cptr(o);
            object ** end = it + cnstr_num_objs(o);
            for (; it != end; ++it) dec_ref(*it, todo);
            free(o);
            break;
        }
        case object_kind::Closure: {
            object ** it  = closure_arg_cptr(o);
            object ** end = it + closure_num_fixed(o);
            for (; it != end; ++it) dec_ref(*it, todo);
            free(o);
            break;
        }
        case object_kind::Array: {
            object ** it  = array_cptr(o);
            object ** end = it + array_size(o);
            for (; it != end; ++it) dec_ref(*it, todo);
            free(o);
            break;
        }
        case object_kind::ScalarArray:
            free(o); break;
        case object_kind::MPZ:
            dealloc_mpz(o); break;
        case object_kind::External:
            dealloc_external(o); break;
        }
        /* We can use a counter to avoid pauses at `del` when many objects
           are reachable from `o` need to be deleted.
           The idea is to have a threshold on the maximum number of elements
           that can be deleted in a single round. */
        if (todo == nullptr)
            return;
        o = pop_back(todo);
    }
}

/* Scalar arrays */

static object * sarray_ensure_capacity(object * o, size_t extra) {
    lean_assert(!is_shared(o));
    size_t sz  = sarray_size(o);
    size_t cap = sarray_capacity(o);
    if (sz + extra > cap) {
        unsigned esize = sarray_elem_size(o);
        object * new_o = alloc_sarray(esize, sz, cap + sz + extra);
        lean_assert(sarray_capacity(new_o) >= sz + extra);
        memcpy(sarray_cptr<char>(new_o), sarray_cptr<char>(o), esize * sz);
        free(o);
        return new_o;
    } else {
        return o;
    }
}

/* Strings */

object * mk_string(char const * s) {
    size_t sz  = strlen(s);
    size_t len = utf8_strlen(s);
    size_t rsz = sz + sizeof(size_t) + 1;
    object * r = alloc_sarray(1, rsz, rsz);
    sarray_set_data<size_t>(r, 0, len);
    memcpy(sarray_cptr<char>(r) + sizeof(size_t), s, sz+1);
    return r;
}

object * mk_string(std::string const & s) {
    return mk_string(s.c_str());
}

object * string_push(object * s, unsigned c) {
    lean_assert(!is_shared(s));
    object * r = sarray_ensure_capacity(s, 5);
    size_t sz = sarray_size(r);
    unsigned consumed = push_unicode_scalar(sarray_cptr<char>(r) + sz - 1, c);
    sarray_set_size(r, sz + consumed);
    sarray_set_data<char>(r, sz + consumed - 1, 0);
    sarray_set_data<size_t>(r, 0, string_len(r) + 1);
    return r;
}

object * string_append(object * s1, object * s2) {
    lean_assert(!is_shared(s1));
    size_t sz1 = sarray_size(s1);
    size_t sz2 = sarray_size(s2);
    size_t len1 = string_len(s1);
    size_t len2 = string_len(s2);
    lean_assert(sz2 >= sizeof(size_t));
    sz2 -= sizeof(size_t);
    object * r = sarray_ensure_capacity(s1, sz2-1);
    if (s1 == s2) s2 = r;
    memcpy(sarray_cptr<char>(r) + sz1 - 1, c_str(s2), sz2 - 1);
    unsigned new_sz = sz1 + sz2 - 1;
    sarray_set_size(r, new_sz);
    sarray_set_data<char>(r, new_sz - 1, 0);
    sarray_set_data<size_t>(r, 0, len1 + len2);
    return r;
}

/* Natural numbers */

object * nat_big_add(object * a1, object * a2) {
    lean_assert(!is_scalar(a1) || !is_scalar(a2));
    if (is_scalar(a1))
        return mk_nat_obj_core(unbox(a1) + mpz_value(a2));
    else if (is_scalar(a2))
        return mk_nat_obj_core(mpz_value(a1) + unbox(a2));
    else
        return mk_nat_obj_core(mpz_value(a1) + mpz_value(a2));
}

object * nat_big_sub(object * a1, object * a2) {
    lean_assert(!is_scalar(a1) || !is_scalar(a2));
    if (is_scalar(a1)) {
        lean_assert(unbox(a1) < mpz_value(a2));
        return box(0);
    } else if (is_scalar(a2)) {
        lean_assert(mpz_value(a1) > unbox(a2));
        return mk_nat_obj(mpz_value(a1) - unbox(a2));
    } else {
        if (mpz_value(a1) < mpz_value(a2))
            return box(0);
        else
            return mk_nat_obj(mpz_value(a1) - mpz_value(a2));
    }
}

object * nat_big_mul(object * a1, object * a2) {
    lean_assert(!is_scalar(a1) || !is_scalar(a2));
    if (is_scalar(a1))
        return mk_nat_obj_core(unbox(a1) * mpz_value(a2));
    else if (is_scalar(a2))
        return mk_nat_obj_core(mpz_value(a1) * unbox(a2));
    else
        return mk_nat_obj_core(mpz_value(a1) * mpz_value(a2));
}

object * nat_big_div(object * a1, object * a2) {
    lean_assert(!is_scalar(a1) || !is_scalar(a2));
    if (is_scalar(a1)) {
        lean_assert(mpz_value(a2) != 0);
        lean_assert(unbox(a1) / mpz_value(a2) == 0);
        return box(0);
    } else if (is_scalar(a2)) {
        unsigned n2 = unbox(a2);
        return n2 == 0 ? a2 : mk_nat_obj(mpz_value(a1) / n2);
    } else {
        lean_assert(mpz_value(a2) != 0);
        return mk_nat_obj(mpz_value(a1) / mpz_value(a2));
    }
}

object * nat_big_mod(object * a1, object * a2) {
    lean_assert(!is_scalar(a1) || !is_scalar(a2));
    if (is_scalar(a1)) {
        lean_assert(mpz_value(a2) != 0);
        return a1;
    } else if (is_scalar(a2)) {
        unsigned n2 = unbox(a2);
        return n2 == 0 ? a2 : box((mpz_value(a1) % mpz(n2)).get_unsigned_int());
    } else {
        lean_assert(mpz_value(a2) != 0);
        return mk_nat_obj(mpz_value(a1) % mpz_value(a2));
    }
}

bool nat_big_eq(object * a1, object * a2) {
    if (is_scalar(a1)) {
        lean_assert(unbox(a1) != mpz_value(a2))
        return false;
    } else if (is_scalar(a2)) {
        lean_assert(mpz_value(a1) != unbox(a2))
        return false;
    } else {
        return mpz_value(a1) == mpz_value(a2);
    }
}

bool nat_big_le(object * a1, object * a2) {
    if (is_scalar(a1)) {
        lean_assert(unbox(a1) < mpz_value(a2))
        return true;
    } else if (is_scalar(a2)) {
        lean_assert(mpz_value(a1) > unbox(a2));
        return false;
    } else {
        return mpz_value(a1) <= mpz_value(a2);
    }
}

bool nat_big_lt(object * a1, object * a2) {
    if (is_scalar(a1)) {
        lean_assert(unbox(a1) < mpz_value(a2));
        return true;
    } else if (is_scalar(a2)) {
        lean_assert(mpz_value(a1) > unbox(a2));
        return false;
    } else {
        return mpz_value(a1) < mpz_value(a2);
    }
}

object * nat_big_land(object * a1, object * a2) {
    lean_assert(!is_scalar(a1) || !is_scalar(a2));
    if (is_scalar(a1))
        return mk_nat_obj(mpz(unbox(a1)) & mpz_value(a2));
    else if (is_scalar(a2))
        return mk_nat_obj(mpz_value(a1) & mpz(unbox(a2)));
    else
        return mk_nat_obj(mpz_value(a1) & mpz_value(a2));
}

object * nat_big_lor(object * a1, object * a2) {
    lean_assert(!is_scalar(a1) || !is_scalar(a2));
    if (is_scalar(a1))
        return mk_nat_obj(mpz(unbox(a1)) | mpz_value(a2));
    else if (is_scalar(a2))
        return mk_nat_obj(mpz_value(a1) | mpz(unbox(a2)));
    else
        return mk_nat_obj(mpz_value(a1) | mpz_value(a2));
}

object * nat_big_lxor(object * a1, object * a2) {
    lean_assert(!is_scalar(a1) || !is_scalar(a2));
    if (is_scalar(a1))
        return mk_nat_obj(mpz(unbox(a1)) ^ mpz_value(a2));
    else if (is_scalar(a2))
        return mk_nat_obj(mpz_value(a1) ^ mpz(unbox(a2)));
    else
        return mk_nat_obj(mpz_value(a1) ^ mpz_value(a2));
}

/* Integers */

object * int_big_add(object * a1, object * a2) {
    if (is_scalar(a1))
        return mk_int_obj(int2int(a1) + mpz_value(a2));
    else if (is_scalar(a2))
        return mk_int_obj(mpz_value(a1) + int2int(a2));
    else
        return mk_int_obj(mpz_value(a1) + mpz_value(a2));
}

object * int_big_sub(object * a1, object * a2) {
    if (is_scalar(a1))
        return mk_int_obj(int2int(a1) - mpz_value(a2));
    else if (is_scalar(a2))
        return mk_int_obj(mpz_value(a1) - int2int(a2));
    else
        return mk_int_obj(mpz_value(a1) - mpz_value(a2));
}

object * int_big_mul(object * a1, object * a2) {
    if (is_scalar(a1))
        return mk_int_obj(int2int(a1) * mpz_value(a2));
    else if (is_scalar(a2))
        return mk_int_obj(mpz_value(a1) * int2int(a2));
    else
        return mk_int_obj(mpz_value(a1) * mpz_value(a2));
}

object * int_big_div(object * a1, object * a2) {
    if (is_scalar(a1))
        return mk_int_obj(int2int(a1) / mpz_value(a2));
    else if (is_scalar(a2))
        return mk_int_obj(mpz_value(a1) / int2int(a2));
    else
        return mk_int_obj(mpz_value(a1) / mpz_value(a2));
}

object * int_big_rem(object * a1, object * a2) {
    if (is_scalar(a1))
        return mk_int_obj(mpz(int2int(a1)) % mpz_value(a2));
    else if (is_scalar(a2))
        return mk_int_obj(mpz_value(a1) % mpz(int2int(a2)));
    else
        return mk_int_obj(mpz_value(a1) % mpz_value(a2));
}

bool int_big_eq(object * a1, object * a2) {
    if (is_scalar(a1)) {
        lean_assert(int2int(a1) != mpz_value(a2))
        return false;
    } else if (is_scalar(a2)) {
        lean_assert(mpz_value(a1) != int2int(a2))
        return false;
    } else {
        return mpz_value(a1) == mpz_value(a2);
    }
}

bool int_big_le(object * a1, object * a2) {
    if (is_scalar(a1)) {
        return int2int(a1) <= mpz_value(a2);
    } else if (is_scalar(a2)) {
        return mpz_value(a1) <= int2int(a2);
    } else {
        return mpz_value(a1) <= mpz_value(a2);
    }
}

bool int_big_lt(object * a1, object * a2) {
    if (is_scalar(a1)) {
        return int2int(a1) < mpz_value(a2);
    } else if (is_scalar(a2)) {
        return mpz_value(a1) < int2int(a2);
    } else {
        return mpz_value(a1) < mpz_value(a2);
    }
}

/* Debugging helper functions */

void dbg_print_str(object * o) {
    lean_assert(is_string(o));
    std::cout << c_str(o) << "\n";
}

void dbg_print_num(object * o) {
    if (is_scalar(o)) {
        std::cout << unbox(o) << "\n";
    } else {
        std::cout << mpz_value(o) << "\n";
    }
}
}

extern "C" void lean_dbg_print_str(lean::object* o) { lean::dbg_print_str(o); }
extern "C" void lean_dbg_print_num(lean::object* o) { lean::dbg_print_num(o); }

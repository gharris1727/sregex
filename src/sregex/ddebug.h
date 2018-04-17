
/*
 * Copyright 2012 Yichun "agentzh" Zhang
 * Use of this source code is governed by a BSD-style
 * license that can be found in the LICENSE file.
 */


#ifndef _SREGEX_DDEBUG_H_INCLUDED_
#define _SREGEX_DDEBUG_H_INCLUDED_


#if defined(DDEBUG) && (DDEBUG)

#   define dd(...) \
    uprintf( "sregex ** "); \
    uprintf( __VA_ARGS__); \
    uprintf( " at %s:%d\n", __FILE__, __LINE__)

#else

#   define dd(fmt, ...)

#endif


#endif /* _SREGEX_DDEBUG_H_INCLUDED_ */

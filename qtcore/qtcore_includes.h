


#include </usr/include/stdint.h>
//PTZ191127
//#include <stdint.h>

// is not the same...?!
//list(PREPEND Qt5Core_INCLUDE_DIRS ${CMAKE_CXX_IMPLICIT_INCLUDE_DIRECTORIES}  ${CMAKE_C_IMPLICIT_INCLUDE_DIRECTORIES}  )

// #include <bits/types.h>
//#undef _STDINT_H

// #include <cstdint>
#if 0
#ifndef intmax_t
/* Largest integral types.  */
//typedef __intmax_t		intmax_t;
//typedef __uintmax_t		uintmax_t;
// /usr/include/c++/9/cstdint 84:
using intmax_t = __INTMAX_TYPE__;
#endif
#ifndef uintmax_t
using uintmax_t = __UINTMAX_TYPE__;
#endif
#endif
//#include </usr/include/inttypes.h> //PTZ191195
// In file included from /usr/src/Qt4-0.99.0-0/smokeqt/qtcore/qtcore_includes.h:5:
// In file included from /builtins/inttypes.h:21:
// In file included from /usr/include/clang/9.0.0/include/inttypes.h:21:
// /usr/include/inttypes.h:290:8: error: unknown type name 'intmax_t'
//In file included from /usr/include/x86_64-linux-gnu/qt5/QtCore/qbasicatomic.h:53:
//In file included from /usr/include/x86_64-linux-gnu/qt5/QtCore/qatomic_cxx11.h:45:
///usr/lib/gcc/x86_64-linux-gnu/9/../../../../include/c++/9/atomic:1037:18: error: use of undeclared identifier 'uint8_t'
//need 'intmax_t'
//used to be in #include <stdint.h>
#if 0
typedef unsigned char     uint8_t;
typedef unsigned short    uint16_t;
typedef unsigned int      uint32_t;
typedef unsigned long int uint64_t;
#endif
//
//
#include <QtCore>


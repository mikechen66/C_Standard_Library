/** stdarg.h standard header 
 **
 ** va: variable
 ** ap: a parameter 
 ** _Bnd: boundary
 ** _AUPBND: A upper boundary, its value is 2**N - 1
 ** _ADNBND: A down boundary, its value is 2**N - 1 or 0 
 **
 **/

#ifndef _STDARG
#define _STDARG
#ifndef _YVALS
#include <yvals.h>
#endif

// type definitions
typedef char *va_list;

// macros
#define va_arg(ap, T)   \
    (*(T *)(((ap) += _Bnd(T, _AUPBND)) - _Bnd(T, _ADNBND)))
#define va_end(ap)      (void)0
#define va_start(ap, A) \
    (void)((ap) = (char *)&(A) + _Bnd(A, _AUPBND))
#define _Bnd(X, bnd)    (sizeof (X) + (bnd) & ~(bnd))
#endif
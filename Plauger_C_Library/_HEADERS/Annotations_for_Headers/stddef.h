/** stddef.h standard header 
 **
 ** wchat_t: wide character with type t
 ** ptrditt_t: difference between two pointers with type t
 **/

#ifndef _STDDEF
#define _STDDEF
#ifndef _YVALS
#include <yvals.h>
#endif

// macros
#define NULL    _NULL
#define offsetof(T, member) ((_Sizet)&((T *)0)->member)

// type definitions
#ifndef _SIZET
#define _SIZET
typedef _Sizet size_t;
#endif
#ifndef _WCHART
#define _WCHART
typedef _Wchart wchar_t;
#endif
typedef _Ptrdifft ptrdiff_t;
#endif
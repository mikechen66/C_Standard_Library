/** errno.h standard header
 **
 ** ERRNO: Error number 
 ** EDOM:  Error Domain
 ** ERANGE: Error Range
 ** EFPOS: Error Floating-point Positions
 ** ERRMAX: Error Maximization
 ** NERR:  Number of Errors
 **/

#ifndef _ERRNO
#define _ERRNO
#ifndef _YVALS
#include <yvals.h>
#endif

// error codes 
#define EDOM _EDOM
#define ERANGE _ERANGE
#define EFPOS _EFPOS

// ADD YOURS HERE
#define _NERR _ERRMAX  // one more than last code

// declatations 
extern int errno;
#endif
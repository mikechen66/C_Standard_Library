/** xstrxfrm.h internal header 
 **
 ** _Cosave: a data typeof _Cosave stores state info between calls to _Strxfrm
 **/

#include <string.h>
#include "xstate.h"

// type definitions
typedef struct {
    unsigned char _State;
    unsigned short _Wchar;
    } _Cosave;

// declarations
size_t _Strxfrm(char *, const unsigned char **, size_t,
    _Cosave *);

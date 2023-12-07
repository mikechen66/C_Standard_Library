/** xalloc.h internal header 
 ** 
 ** CELL _OFF: Cell Offset, give the offset in bytes of usable area from startedly allocated element
 ** _MEMBND: Memory Boundary
 ** _Plast: an address of the pointer to the next list element to consider. it can point to _Aldata
 ** _Altab: Alt + Tab (in xstdio.h)
 ** _Aldata: data object of _Altab
 ** _Next: a pointer for the next element 
 ** _Getmem: Get momory, it is used in UNIX-like environment
 **/


#include <stddef.h>
#include <stdlib.h>
#ifndef _YVALS
#include <yvals.h>
#endif

// macros
#define CELL_OFF    (sizeof (size_t) + _MEMBND & ~_MEMBND)
#define SIZE_BLOCK  512 // minimum block size
#define SIZE_CELL   \
    ((sizeof (_Cell) + _MEMBND & ~_MEMBND) - CELL_OFF)

// type definitions
typedef struct _Cell {
    size_t _Size;
    struct _Cell *_Next;
    } _Cell;
typedef struct {
    _Cell **_Plast;
    _Cell *_Head;
    } _Altab;

// declarations
void *_Getmem(size_t);
extern _Altab _Aldata;
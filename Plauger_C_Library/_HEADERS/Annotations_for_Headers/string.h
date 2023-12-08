/** string.h standard header 
 **
 ** memchr: memory character, designate c (unsigned char) to the position that ptr points to
 ** memcpy: memory copy, copy a block of memory from one location to another
 ** memmove: copy a block of memory from a location to another, it is declared in string
 ** memset:  fill a block of memory with a particular value
 ** strcat: string concatenation between s1 and s2
 ** strchr: locate character in string
 ** strrchr: searches for the last occurrence of the character c (an unsigned char) 
 ** strcmp:  string comparison
 ** strcoll: string LC_COLLATE
 ** strspn:  get length of a prefix substring, it is the complementary function of strcspn
 ** strcspn: calculates the length of the number of characters before the 1st occurrence of 
 **          character present in both the string (return an index)
 ** strerror: string error
 ** strlen: string lenth
 ** strcpy:  string copy
 ** strncpy: string copy n strings
 ** strpbrk: sstring breakset, search a string for any of a set of bytes 
 ** strtok:  string token, extract tokens from strings
 ** strxfrm: string transformartion, meaning transform string for comparison
 ** _Strerror: a function indicated in Plauger's book
 **
 **/

#ifndef _STRING
#define _STRING
#ifndef _YVALS
#include <yvals.h>
#endif
// macros
#define NULL	_NULL
// type definitions
#ifndef _SIZET
#define _SIZET
typedef _Sizet size_t;
#endif

// declarations
void *memchr(const void *, int, size_t);
int memcmp(const void *, const void *, size_t);
void *memcpy(void *, const void *, size_t);
void *memmove(void *, const void *, size_t);
void *memset(void *, int, size_t);
char *strcat(char *, const char *);
char *strchr(const char *, int);
int strcmp(const char *, const char *);
int strcoll(const char *, const char *);
char *strcpy(char *, const char *);
size_t strcspn(const char *, const char *);
char *strerror(int);
size_t strlen(const char *);
char *strncat(char *, const char *, size_t);
int strncmp(const char *, const char *, size_t);
char *strncpy(char *, const char *, size_t);
char *strpbrk(const char *, const char *);
char *strrchr(const char *, int);
size_t strspn(const char *, const char *);
char *strstr(const char *, const char *);
char *strtok(char *, const char *);
size_t strxfrm(char *, const char *, size_t);
char *_Strerror(int, char *);

// macro overrides
#define strerror(errcode)	_Strerror(errcode, _NULL)
#endif

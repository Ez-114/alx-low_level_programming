#ifndef VAR_FUNC
#define VAR_FUNC

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

/**
* struct format - format struct
* @c: char
* @printer: func pointer
*/
typedef struct format
{
	char *c;
	void (*f)(char *, va_list);
} format_t;

/* functions goes here */
int sum_them_all(const unsigned int, ...);
void print_numbers(const char *, const unsigned int, ...);
void print_strings(const char *, const unsigned int, ...);
void print_all(const char * const format, ...);

#endif

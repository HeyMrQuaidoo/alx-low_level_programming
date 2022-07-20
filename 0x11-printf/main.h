#ifndef PRINTFILE_H
#define PRINTFILE_H
#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct format - struct
 * @options: Pointer to char
 * @func: Pointer to function to call
 */
typedef struct format
{
	char *options;
	int (*func)();
} format_t;
int _printf(const char *format, ...);
#endif

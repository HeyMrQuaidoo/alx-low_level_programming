#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: sep to use
 * @n: number of lines to be printed
 *
 * Return: Always success
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num;
	va_list vlist;

	va_start(vlist, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(vlist, int);
		printf("%d", num);
		if (i < n - 1 && separator)
			printf("%s", separator);
	}
	printf("\n");
	va_end(vlist);
}

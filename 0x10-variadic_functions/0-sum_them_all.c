#include <stdio.h>
#include <stdarg.h>

/**
 * sum_them_all - a function that sums parameters
 * @n: the number of arguments
 *
 * Return: sum or zero
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;
	va_list vlst;

	if (n == 0)
	{
		return (0);
	}

	va_start(vlst, n);
	for (i = 0; i < n; i++)
	{
		num += va_arg(vlst, int);
	}
	va_end(vlst);

	return (num);
}

#include "main.h"

/**
 * print_last_digit - Function that prints
 * the last digit of a number
 * @n: integer argument
 *
 * Return: Always (0) Success
 */

int print_last_digit(int n)
{
	n = n % 10;

	if (n < 0)
	{
		n *= -1;
	}

	_putchar(n  + '0');
	return (n);
}

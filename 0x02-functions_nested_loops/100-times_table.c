#include "main.h"

/**
 * print_times_table - Function that prints the n
 * times table, starting with 0
 * @n: integer number to print
 *
 * Return: Always success(0)
 */

void print_times_table(int n)
{
	int a, b, result;

	if (n < 0 || n > 15)
	{
		return;
	}

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			result = a * b;
			if (result > 99)
			{
				_putchar(result / 100 + '0');
				_putchar((result / 10 % 10) + '0');
				_putchar(result % 10 + '0');
			}
			else if (result > 9)
			{
				_putchar(' ');
				_putchar(result / 10 + '0');
				_putchar(result % 10 + '0');
			}
			else if (b != 0)
			{
				_putchar(' ');
				_putchar(' ');
				_putchar(result + '0');
			}
			else
            		{
				_putchar(result + '0');
            		}
			if (b != n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}

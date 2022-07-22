#include "main.h"

/**
 * _pow - function that returns
 * the value of base raised to the power.
 * @base: base number
 * @power: exponent
 * Return: number raised to power
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{

	if (power == 0)
	{
		return (1);
	}

	if (power <= 0)
	{
		return (-1);
	}
	return (_pow(base, power - 1) * base);
}

/**
 * print_binary - prints a binary number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

#include "main.h"

/**
 * _pow_recursion - function that returns
 * the value of x raised to the power of y.
 * @x: base number
 * @y: exponent
 * Return: number raised to power of y
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (_pow_recursion(x, y - 1) * x);
}


/**
 * print_binary - prints a binary number
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int num, curr;
	char flag;

	flag = 0;
	num = _pow_recursion(2, sizeof(unsigned long int) * 8 - 1);
	while (num != 0)
	{
		curr = n & num;
		if (curr == num)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || num == 1)
		{
			_putchar('0');
		}
		num >>= 1;
	}
}

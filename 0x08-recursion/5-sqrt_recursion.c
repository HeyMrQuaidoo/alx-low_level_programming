#include "main.h"
/**
 * _sqrt_recursion - function that returns
 * the natural square root of a number.
 * @n: integer n
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (_sqrt_recursion_helper(1, n));
}

/**
 * _sqrt_recursion_helper - helper function
 * to find square root
 * @num: number to sqr
 * @compute: number to comp to
 * Return: square root
 */
int _sqrt_recursion_helper(int num, int compute)
{
	if (num * num > compute)
	{
		return (-1);
	}

	if (num * num == compute)
	{
		return (num);
	}

	return (_sqrt_recursion_helper(num + 1, compute));
}

#include "main.h"
/**
 * factorial - function that returns
 * the natural square root of a number.
 * @n: integer n
 * Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1)
	{
		return (1);
	}
	return (_sqrt_recursion_helper(n / 2, n));
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
	if (num <= 0)
	{
		return (-1);
	}

	if (num * num == compute)
	{
		return (num);
	}

	return (_sqrt_recursion_helper(num - 1, compute));
}
/**
 * is_prime_number - checks if a given
 * number is prime
 * @n: number to check
 * Return: if n is prime returns 1 else 0
 */
int is_prime_number(int n)
{
	if (n <= 1 || _sqrt_recursion(n) >= 1)
	{
		return (0);
	}
	if (_sqrt_recursion(n) == -1)
	{
		return (1);
	}
	return (_sqrt_recursion(n));
}

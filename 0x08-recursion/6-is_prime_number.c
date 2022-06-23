#include "main.h"
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

#include "main.h"
/**
 * factorial - function that returns
 * the factorial of a given number.
 * @n: integer n
 * Return: factorial
 */
int factorial(int n)
{
    if (n < 0)
    {
        return(-1);
    }
    if (n == 0 || n == 1)
    {
        return (1);
    }
    return (factorial(n - 1) * n);
}

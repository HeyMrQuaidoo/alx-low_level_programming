#include <stdio.h>

/**
 * main - Program that computes and prints
 * the sum of all the multiples of 3 or 5
 * below 1024 (excluded),
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, result;

	for (n = 0; n < 1024; n++)
	{
		if (n % 3 == 0 || n % 5 == 0)
		{
			result += n;
		}
	}
	printf("%d\n", result);
	return (0);
}

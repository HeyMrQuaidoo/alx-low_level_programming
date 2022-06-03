#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 *
 * Return: Always success(0)
 */
int main(void)
{
	int n;
	int mod10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	mod10 = n % 10;

	if (mod10 > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, mod10);
	}
	else if (mod10 < 6 && mod10 != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, mod10);
	}
	else
		printf("Last digit of %d is %d and is 0\n", n, mod10);

	return (0);
}

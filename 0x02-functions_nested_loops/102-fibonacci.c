#include <stdio.h>
/**
  * main - Prints the first 50 Fibonacci numbers,
  * starting with 1 and 2, followed by a new line.
  *
  * Return: Always success(0).
  */
int main(void)
{
	unsigned long count, a, b;

	printf("%lu", b);

	for (count = 1; count < 50; count++)
	{
		printf(", %lu", a);
		a += b;
		b = a - b;
	}
	printf("\n");

	return (0);
}

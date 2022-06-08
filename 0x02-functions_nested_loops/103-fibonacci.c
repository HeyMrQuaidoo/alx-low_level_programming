#include <stdio.h>
/**
  * main - Prints the first 4000000 Fibonacci numbers,
  * starting with 0 and 1, followed by a new line.
  *
  * Return: Always success(0).
  */
int main(void)
{
	unsigned long int a = 0;
	unsigned long int b = 1;
	unsigned long int res = 0;
	unsigned long int sum = 0;

	while (4000000 > R)
	{
		res = a + b;

		if ((R % 2) == 0)
		{
			sum += res;
		}

		a = b;
		b = res;
	}

	printf("%li\n", sum);
	return (0);
}

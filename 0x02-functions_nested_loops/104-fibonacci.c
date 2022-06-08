#include <stdio.h>
/**
  * main - Prints the first 98 Fibonacci numbers,
  * starting with 1 and 2, followed by a new line.
  *
  * Return: Always success(0).
  */
int main(void)
{
	unsigned long count;
	unsigned long b = 1;
	unsigned long a = 2;
	unsigned long int i, c, d, e, f;

	printf("%lu", b);

	for (count = 1; count < 91; count++)
	{
		printf(", %lu", a);
		a += b;
		b = a - b;
	}

	c = (b / 1000000000);
	d = (b % 1000000000);
	e = (a / 1000000000);
	f = (a % 1000000000);

	for (i = 92; i < 99; ++i)
	{
		printf(", %lu", e + (f / 1000000000));
		printf("%lu", f % 1000000000);
		e = e + c;
		c = e - c;
		f = f + d;
		d = f - d;
	}
	printf("\n");

	return (0);
}

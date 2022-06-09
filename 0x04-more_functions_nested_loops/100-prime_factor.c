#include <stdio.h>
/**
* main - program that finds and prints the largest prime factor
* of the number 612852475143, followed by a new line.
* 
* Return: Always success(0)
*/
int main(void)
{
	long n, number = 612852475143;

	for (n  = 2; n <= number; n++)
	{
		if (number % n == 0)
		{
			number = number / n;
			n--;
		}
	}
	printf("%lu\n", n);
	return (0);
}
#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always success(0)
 */
int main(void)
{
	int n = '0';

	while (n <= '9')
	{
		putchar(n);
		if (n == '9')
		{
			putchar('\n');
			return (0);
		}
		else
		{
			putchar(',');
			putchar(' ');
			n++;
		}
	}
	return (0);
}

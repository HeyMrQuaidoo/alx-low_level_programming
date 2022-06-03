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
		if (a == '9')
		{
			putchar('\n');
		}
		else
		{
			putchar(',');
			putchar(' ');
			n++;
		}
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always success(0)
 */
int main(void)
{
	char z = 'z';

	for (z = 'z'; z >= 'a'; z--)
	{
		putchar(z);
	}
	putchar('\n');
	return (0);
}

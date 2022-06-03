#include <stdio.h>
/**
 * main - Entry point
 *
 *
 * Return: Always success(0)
 */
int main(void)
{
	char n = '0';
	char a = 'a';

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}

#include "main.h"
/**
 * print_rev - function that prints a string,
 * in reverse, followed by a new line.
 *
 *@s: char s
 *Return: Always 0.
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n])
	{
		n++;
	}

	n--;

	for (; n >= 0; n--)
	{
		_putchar(s[n]);
	}

	_putchar('\n');
}

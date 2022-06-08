#include "main.h"

/**
 * main - Entry point
 *
 *
 * Return: Always success(0)
 */
void print_alphabet(void)
{
	char a = 'a';

	for (a = 'a'; a <= 'z'; a++)
	{
		_putchar(a);
	}
	_putchar('\n');
}

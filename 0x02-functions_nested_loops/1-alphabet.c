#include "main.h"

/**
 * print_alphabet - Function that prints the alphabet,
 * in lowercase, followed by a new line.
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

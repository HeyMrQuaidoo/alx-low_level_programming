#include "main.h"

/**
 * print_alphabet_x10 - Function that prints the alphabet,
 * in lowercase, followed by a new line.
 *
 *
 * Return: Always success(0)
 */
void print_alphabet_x10(void)
{
	char a = 'a';
	int b = 0;

	while (b < 10)
	{

		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
		b++;
	}
}

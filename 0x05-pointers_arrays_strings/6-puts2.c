#include "main.h"
/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 *
 * @str: char str
 *
 * Return: 0 success
 */
void puts2(char *str)
{
	int curr;

	for (curr = 0; str[curr] != '\0'; curr++)
	if (curr % 2 == 0)
    {
		_putchar(str[curr]);
    }
	_putchar('\n');
}
#include "main.h"
/**
 * puts_half - function that prints half of a string,
 * followed by a new line.
 *
 * @str: char str
 *
 * Return: 0 is success
 */
void puts_half(char *str)
{
	int curr = 0, n;

	while (str[curr] != '\0')
	{
		curr++;
	}

	if (curr + 1 % 2 != '0')
	{
		n = (curr - 1) / 2;
	}
	else
	{
		n = (curr / 2);
	}
	n++;

	for (curr = n; str[curr] != '\0'; curr++)
	{
		_putchar(str[curr]);
	}
	_putchar('\n');
}

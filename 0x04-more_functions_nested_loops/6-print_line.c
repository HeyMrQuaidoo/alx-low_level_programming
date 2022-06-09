#include "main.h"

/**
  * print_line - function that draws a straight
  * line in the terminal.
  * @n: integer n
  */
void print_line(int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		if (n > 0)
		{
			_putchar('_');
		}
		else
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}

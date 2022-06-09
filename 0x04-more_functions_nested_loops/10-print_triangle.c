#include "main.h"

/**
  * print_triangle - function that prints a triangle
  * followed by a new line.
  * @size: integer size of triangle
  */
void print_triangle(int size)
{
	int row, column, n;

	if (size <= 0)
		_putchar('\n');
	for (row = 0; row < size; row++)
	{
		for (column = size - row; column > 1; column--)
			_putchar(' ');
		for (n = column + row; n >= 1; n--)
			_putchar('#');
		_putchar('\n');
	}
}
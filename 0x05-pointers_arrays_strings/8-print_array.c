#include "main.h"
#include <stdio.h>

/**
 * print_array -  function that prints n elements of an
 * array of integers, followed by a new line.
 * @a: array
 * @n: array length n
 *
 * Return: (none).
 */

void print_array(int *a, int n)
{
	int count;

	for (count = 0; count < n; count++)
	{
		printf("%d", a[count]);

		if (count < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}

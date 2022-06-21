#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - function that prints the sum of the two diagonals
 * of a square matrix of integers.
 * area pointed to by s with the constant byte b
 * @a: array matrix
 * @size: size of matrix
 */
void print_diagsums(int *a, int size)
{
	int i = 0, j = 0, count;
	int m = size * size;

	for (count = 0; count < m; count += m + 1)
	{
		i += a[count];
	}
	for (count = size - 1; count < m - 1; count += size - 1)
	{
		j += a[count];
	}
	printf("%d, %d\n", i, j);
}

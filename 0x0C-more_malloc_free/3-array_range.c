#include <stdlib.h>
#include "main.h"
/**
 * array_range - function that creates an array of integers.
 * @min: min of array
 * @max: max of array
 * Return: pointer to array or null
 **/
int *array_range(int min, int max)
{
	int *n;
	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	n = malloc(size * sizeof(*n));
	if (n == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size && min <= max; i++, min++)
	{
		*(n + i) = min;
	}
	return (n);
}

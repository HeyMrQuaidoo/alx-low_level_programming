#include <stdlib.h>
#include "function_pointers.h"
/**
 * int_index - function that for searches an integer
 * @array: pointer to array
 * @size: array size
 * @cmp: pointer to function to be used to compare values
 * Return: first index of element, on succes or return -1
 **/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		{
			return (i);
		}

	}
	return (-1);
}

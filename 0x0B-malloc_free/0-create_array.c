#include "main.h"
#include <stdlib.h>


/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: the size of array
 * @c: char to use
 *
 * Return: pointer or 0
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	i = 0;
	if (size != 0)
	{
		arr = malloc(size * sizeof(c));
	}
	else
	{
		return (NULL);
	}
	if (arr == NULL)
	{
		return (NULL);
	}
	while (i < size)
	{
		arr[i] = c;
		i++;
	}
	return (arr);
}

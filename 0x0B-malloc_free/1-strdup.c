#include "main.h"
#include <stdlib.h>

/**
 * _strdup - function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given
 * as a parameter.
 * @str: String to duplicate
 *
 * Return: Pointer or NULL
 */
char *_strdup(char *str)
{
	char *n;
	unsigned int i, len;

	i = len = 0;
	n = malloc(len * sizeof(*str));

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	if (n == NULL)
	{
		return (NULL);
	}
	while (i <= len)
	{
		n[i] = str[i];
		i++;
	}
	return (n);
}

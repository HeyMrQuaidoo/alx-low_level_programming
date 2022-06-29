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
	char *s;
	int i, j;

	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	i++;
	s = malloc(sizeof(*str) * i);
	if (s == NULL)
		return (NULL);
	j = 0;
	while (str[j] != '\0')
	{
		s[j] = str[j];
		j++;
	}
	return (s);
}

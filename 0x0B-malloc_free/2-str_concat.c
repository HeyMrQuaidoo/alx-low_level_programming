#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - Concatenates two strings
 * @s1: string one
 * @s2: string two
 *
 * Return: Pointer or NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *str, *n;
	int strlen1, strlen2;
	int i, j;

	n = "";
	if (s1 == NULL)
		s1 = n;
	if (s2 == NULL)
		s2 = n;
	i = strlen1 = strlen2 = 0;
	while (s1[strlen1] != '\0')
	{
		strlen1++;
	}
	while (s2[strlen2] != '\0')
	{
		strlen2++;
	}
	strlen2++;
	str = malloc((strlen1 + strlen2) * sizeof(*s1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (i < strlen1)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (j <= strlen2)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	return (str);
}


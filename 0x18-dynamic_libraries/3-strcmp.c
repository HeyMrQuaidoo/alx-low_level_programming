#include "main.h"
/**
 * _strcmp - function that compares two strings.
 * @s1: char 1 to compare
 * @s2: char 2 to compare
 * Return: 0 if char equal
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i] && s1[i] && s2[i])
	{
		i++;
	}

	return (s1[i] - s2[i]);
}

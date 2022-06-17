#include "main.h"
/**
 * reverse_array - function that changes all lowercase
 * letters of a string to uppercase.
 * @s: len of array
 * Return: s uppercase of string
 */
char *string_toupper(char *s)
{
	int i = 0;

	for (; s[i]; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
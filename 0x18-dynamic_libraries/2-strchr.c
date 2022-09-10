#include "main.h"
/**
 * _strchr - function that locates a character in a string.
 * @s: pointer to string to be searched
 * @c: char to search for
 * Return: Returns a pointer to the first occurrence
 * of the character
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (!c ? s : NULL);
}

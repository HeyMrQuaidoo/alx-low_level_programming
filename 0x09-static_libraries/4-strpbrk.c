#include "main.h"
/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 *
 * @s: pointer to string to be searched
 * @accept: pointer to character prefix to print
 * Return: Returns a pointer to the byte in s that matches one of
 * the bytes in accept, or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a = 0;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[a])
			{
				return (s);
			}
		}
		s++;
	}
	return (NULL);
}

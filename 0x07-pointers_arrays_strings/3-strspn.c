#include "main.h"
/**
 * _strspn -  function that gets the length of a prefix substring.
 * @s: pointer to string to be searched
 * @accept: pointer to character prefix to print
 * Return: Returns the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b = 0, c = 0;

	while (s[a])
	{
		for (b; accept[b]; b++)
		{
			if (s[a] == accept[b])
			{
				c++;
			}
		}
		if (c < a)
			break;
		a++;
	}
	return (c);
}
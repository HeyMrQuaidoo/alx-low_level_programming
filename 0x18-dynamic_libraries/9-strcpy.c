#include "main.h"
#include <stdio.h>

/**
 * *_strcpy -  function that copies the string pointed to by src,
 * including the terminating
 * null byte (\0), to the buffer pointed to by dest.
 * @src: src
 * @dest: dest
 *
 * Return: pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	int n;

	for (n = 0; src[n]; n++)
	{
		dest[n] = src[n];
	}
	dest[n] = '\0';

	return (dest);
}

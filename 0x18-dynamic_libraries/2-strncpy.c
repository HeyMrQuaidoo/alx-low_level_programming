#include "main.h"
/**
* *_strncpy - function that copies a string.
 * @dest: dest string
 * @src: src string
 * @n: num of bytes
* Return: dest copied string
*/
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

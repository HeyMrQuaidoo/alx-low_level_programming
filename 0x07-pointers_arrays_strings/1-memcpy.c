#include "main.h"
/**
 * _memcpy - ffunction that copies memory area
 * @dest: dest pointer to be copied to
 * @src: src pointer to be copied
 * @n: number of byte to copy
 * Return: s - pointer to memory area
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a  = 0;

	while (a < n)
	{
		dest[a] = src;
		a++;
	}
	return (dest);
}

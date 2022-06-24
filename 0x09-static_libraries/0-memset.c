#include "main.h"
/**
 * _memset - function fills the first n bytes of the memory
 * area pointed to by s with the constant byte b
 * @s: pointer to memory area
 * @b: byte used for filling
 * @n: byte memmory allocation to fill
 * Return: s - pointer to memory area
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		s[a] = b;
		a++;
	}
	return (s);
}

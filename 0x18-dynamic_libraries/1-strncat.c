#include "main.h"
/**
 * _strncat - function that concatenates two strings.
 * @dest: dest string
 * @src: src string
 * @n: num of bytes from src
 * Return: dest - concatenated string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;
	int terminate;

	for (terminate = 0; dest[terminate];)
	{
		terminate++;
	}

	while (b < n && src[a])
	{
		dest[terminate + a] = src[a];
		a++;
		b++;
	}
	return (dest);
}

#include "lists.h"

/**
 * _strlen - return length of string
 *
 * @str: string
 * Return: length of string
 */
int _strlen(char *str)
{
	if (*str == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen(str + 1));
	}
}

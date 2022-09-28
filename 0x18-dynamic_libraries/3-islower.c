#include "main.h"

/**
 * _islower - Function that checks for
 * lowercase character
 * @c: character to be compared
 *
 * Return: Always (0) Success
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

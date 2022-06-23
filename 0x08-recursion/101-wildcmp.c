#include "main.h"
/**
 * wildcmp - function that compares two strings and returns 1 if
 * the strings can be considered identical, otherwise return 0.
 * @s1: pointer to string
 * @s2: pointer to string
 * Return: returns 1 if a string is a
 * equal and 0 if not.
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
        {
            return (1);
        }
        if (*(s1 + 1) != '\0' && *s2 == '\0')
        {
            return (0);
        }
	}
	return (0);
}

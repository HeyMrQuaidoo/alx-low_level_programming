#include "main.h"
/**
 * _strstr - function that locates a substring.
 *
 * @haystack: pointer to string to be searched
 * @needle: pointer to character prefix to print
 *
 * Return: Returns a pointer to the beginning of the
 * located substring, or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *word = haystack;
	char *cursor = needle;

	while (*word)
	{
		word = haystack;
		cursor = needle;

		while (*cursor)
		{
			if (*cursor == *word)
			{
				word++;
				cursor++;
			}
			else
			{
				break;
			}
		}
		if (*cursor == '\0')
		{
			return (word);
		}
		word++;
	}
	return (NULL);
}

#include "main.h"

/**
 * rev_string - function that reverses a string.
 * @s: pointer to char s
 *
 * Return: Always Succes(0).
 */
void rev_string(char *s)
{
	int a = 0;
	int b = 0;
	int swap = 0;

	while (s[b])
	{
		b++;
	}

	b = b - 1;

	while (a < b + 1 / 2)
	{
		swap = s[a];
		s[a] = s[b];
		s[b] = swap;

		b--;
		a++;
	}
}

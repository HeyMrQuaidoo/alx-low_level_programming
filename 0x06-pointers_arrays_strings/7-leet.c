#include "main.h"
/**
 * leet - function that encodes a string into 1337.
 * @c: char to encode
 * Return: @c encoded string
*/
char *leet(char *c)
{
	int a;
	int b;
	char letters[] = "aeotl";
	char up_letters[] = "AEOTL";
	char numbers[] = "43071";

	for (a = 0; c[a] != '\0'; a++)
	{
		for (b = 0; letters[b] != '\0'; b++)
		{
			if (c[a] == letters[b] || c[a] == up_letters[b])
				c[a] = numbers[b];
		}
	}
	return (c);
}

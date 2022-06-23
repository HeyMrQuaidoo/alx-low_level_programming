#include "main.h"
/**
 * _strlen_recursion - function that returns
 * the length of a string.
 * @s: pointer to string
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (_strlen_recursion(s + 1) + 1);
}
/**
 * is_palindrome_helper - function that returns 1
 * if two chars are equal zero otherwise
 * @s: pointer to string
 * @i: starting index
 * @j: ending index
 * Return: returns 1 if equal 0 otherwise
 */
int is_palindrome_helper(char *s, int i, int j)
{
	if (i == j - 1)
	{
		return (s[i] == s[j]);
	}
    if (i == j)
	{
		return (1);
	}
	if (s[i] != s[j])
	{
		return (0);
	}
	return (is_palindrome_helper(s, i + 1, j - 1));
}

/**
 * is_palindrome - function that returns 1
 * if a string is a palindrome and 0 if not.
 * @s: pointer to string
 * Return: returns 1 if a string is a
 * palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int n = _strlen_recursion(s);
	if (n == 0 || *s != s[n - 1])
	{
		return (0);
	}
	return (is_palindrome_helper(s, 0, n - 1));
}

#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: character to be checked
 * Return: 1 if c is digit
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

/**
 * main -  program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always success (0)
 **/
int main(int argc, char *argv[])
{
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = _isdigit(atoi(argv[i]));
		if (num == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

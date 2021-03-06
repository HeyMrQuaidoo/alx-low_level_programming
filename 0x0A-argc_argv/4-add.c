#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _isdigit - checks for a digit (0 through 9).
 * @c: character to be checked
 * Return: 1 if c is digit
 */
int _isdigit(char *c)
{
	int i, num, len;

	i = 0;
	len = strlen(c);

	while (i < len)
	{

		if (c[i] >= '0' && c[i] <= '9')
		{
			num = num * 10 + (c[i] - '0');
		}
		else
		{
			return (-1);
		}
		i++;
	}
	return (num);
}
/**
 * main - program that adds positive numbers
 * @argc: argument count
 * @argv: argument vector
 * Return: Always success (0)
 **/
int main(int argc, char *argv[])
{
	int i, num, sum;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		num = _isdigit(argv[i]);
		if (num == -1)
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}


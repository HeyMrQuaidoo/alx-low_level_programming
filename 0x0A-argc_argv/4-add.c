#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main -  program that adds positive numbers.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always success (0)
 **/
int main(int argc, char *argv[])
{
	int i, sum = 0, c = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (c < argc)
	{
		for (i = 0; argv[c][i] != '\0'; i++)
		{
			if (!(isdigit(argv[c][i])))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[c]);
		c++;
	}
	printf("%d\n", sum);
	return (0);
}

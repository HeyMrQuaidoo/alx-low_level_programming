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
	int i, num, sum = 0;

	for (i = 1; i < argc; i++)
	{
		num = atoi(argv[i]);
		if (isdigit(num) == 0)
		{
			printf("Error\n");
			return (1);
		}
		sum += num;
	}

	printf("%d\n", sum);
	return (0);
}

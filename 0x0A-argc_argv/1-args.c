#include <stdio.h>
/**
 * main - program that prints the number
 * of arguments passed into it.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always success (0)
 **/
int main(int argc, char *argv[])
{
	if (sizeof(argv[0]) < 0)
	{
		return (0);
	}
	printf("%d\n", argc - 1);
	return (0);
}

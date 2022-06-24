#include <stdio.h>
/**
 * main - program that prints its name,
 * followed by a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: Always success (0)
 **/
int main(int argc, char *argv[])
{
	if (argc < 1)
	{
		return (0);
	}
	printf("%s\n", argv[0]);
	return (0);
}

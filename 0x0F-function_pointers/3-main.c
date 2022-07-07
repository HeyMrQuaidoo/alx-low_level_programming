#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - function to use operands calculation
 *
 * @c: count of arguments
 * @arg: array
 *
 * Return: Always 0
 */
int main(int c, char *arg[])
{
	int a, b, (*operate)(int, int);

	if (c != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if ((*arg[2] != '+' &&
		*arg[2] != '-' &&
		*arg[2] != '/' &&
		*arg[2] != '*' &&
		*arg[2] != '%')
		|| arg[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	a = atoi(arg[1]);
	b = atoi(arg[3]);
	if ((*arg[2] == '/' || *arg[2] == '%') && (b == 0))
	{
		printf("Error\n");
		exit(100);
	}
	operate = get_op_func(arg[2]);
	printf("%d\n", operate(a, b));
	return (0);

}

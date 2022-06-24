#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the minimum number of coins to make
 * change for an amount of money.
 * @argc: argument count
 * @argv: argument vector
 * Return: number of amt or 1
 **/
int main(int argc, char *argv[])
{
	int amt, change;


	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	
	change = atoi(argv[1]);
	amt = 0;

	if (change > 25)
	{
		while (change >= 25)
			change -= 25, amt++;
	}
	if (change > 10 && change < 25)
	{
		while (change >= 10)
			change -= 10, amt++;
	}
	if (change > 5 && change < 10)
	{
		while (change >= 5)
			change -= 5, amt++;
	}
	if (change > 2 && change < 5)
	{
		while (change >= 2)
			change -= 2, amt++;
	}
	if (change == 1 || change == 2 || change == 5 || change == 10 || change == 25)
	{
		amt++;
	}
	printf("%d\n", amt);
	return (0);
}


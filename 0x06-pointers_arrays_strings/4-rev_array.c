#include "main.h"
/**
 * reverse_array - writes the character c to stdout
 * @a: array to be reversed
 * @n: len of array
 * Return: Always success
 */
void reverse_array(int *a, int n)
{
	int temp;

	for (int i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}

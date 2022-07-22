#include "main.h"

/**
 * get_bit - function that returns the value of a bit at a given index.
 * @n: number of bits
 * @index: index to check
 *
 * Return: value of the bit, or -1 if there is an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int num, curr;

	if (index > (sizeof(unsigned long int) * 8 - 1))
	{
		return (-1);
	}
	num = 1 << index;
	curr = n & num;
	if (curr == num)
	{
		return (1);
	}

	return (0);
}

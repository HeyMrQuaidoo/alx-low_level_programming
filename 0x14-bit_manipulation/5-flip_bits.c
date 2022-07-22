#include "main.h"

/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to flip to second number
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, curr;
	unsigned int count, i;

	count = 0;
	curr = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (curr == (curr & diff))
			count++;
		curr <<= 1;
	}
	return (count);
}

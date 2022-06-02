#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char charval;
	int intval;
	long longval;
	long long longlongval;
	float floatval;

	printf("Size of a char: %lu byte(s)\n", sizeof(charval));
	printf("Size of a char: %lu byte(s)\n", sizeof(intval));
	printf("Size of a char: %lu byte(s)\n", sizeof(longval));
	printf("Size of a char: %lu byte(s)\n", sizeof(longlongval));
	printf("Size of a char: %lu byte(s)\n", sizeof(floatval));

	return (0);
}

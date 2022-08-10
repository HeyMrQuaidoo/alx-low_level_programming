#include "main.h"

/**
 * main - shell main function
 * @argc: argument counter
 * @argv: argument vector 
 * Return - 0
 **/
int main(int argc, char **argv)
{
	(void) argc;
	(void) argv;

	signal(SIGINT, controlC);
	prompt();
	return (0);
}

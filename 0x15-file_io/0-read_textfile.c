#include "main.h"

/**
 * read_textfile -  function that reads a text file and prints it to the
 * POSIX standard output.
 * @filename: The name of file
 * @letters: The number of letters to print
 *
 * Return: number of letters to print else return 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t n = 0;
	int file_descr, curr;
	void *buf = malloc(sizeof(char) * 2);

	if (filename == NULL || buf == NULL)
		return (0);
	file_descr = open(filename, O_RDONLY);
	if (file_descr < 0)
		return (0);
	for (n = 0; n < (ssize_t)letters; n++)
	{
		curr = read(file_descr, buf, 1);
		if (curr == 0)
			break;
		curr = write(STDOUT_FILENO, buf, 1);
		if (curr != 1)
			return (0);
	}
	close(file_descr);
	free(buf);
	return (n);
}

#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * _strlen - function that returns the length of a string
 * @str: pointer to string
 *
 * Return: length of string
 */
size_t _strlen(char *str)
{
	size_t n;

	for (n = 0; str[n]; n++)
		;
	return (n);
}

/**
 * append_text_to_file - function that appends a text at the end of a file.
 * @filename: name of file
 * @text_content: string to append to file
 *
 * Return: 1 on success else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int file_descr;
	ssize_t len;

	if (filename == 0)
		return (-1);
	file_descr = open(filename, O_WRONLY | O_APPEND);
	if (file_descr == -1)
		return (-1);
	if (text_content != 0)
		len = write(file_descr, text_content, _strlen(text_content));
	close(file_descr);
	if (len == -1)
		return (-1);
	return (1);
}

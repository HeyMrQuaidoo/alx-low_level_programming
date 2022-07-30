#include "main.h"

/**
 * create_file - function that creates a file
 * @filename: The name of file
 * @text_content: The content of file
 *
 * Return: 1 if successful, otherwise -1
 */
int create_file(const char *filename, char *text_content)
{
	int file_descr, curr;

	if (filename == NULL)
		return (-1);
	file_descr = open(filename, O_RDWR | O_TRUNC);
	if (file_descr < 0)
		file_descr = open(filename, O_WRONLY | O_CREAT, 0600);
	if (file_descr >= 0)
	{

		for (curr = 0; text_content != NULL && *(text_content + curr) != '\0'; curr++)
		{
			if (write(file_descr, text_content + curr, 1) != 1)
				return (-1);
		}
		close(file_descr);
	}
	return (1);
}

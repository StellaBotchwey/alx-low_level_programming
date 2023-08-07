#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: the name of the file to create
 * @text_content: a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 *
 */
int create_file(const char *filename, char *text_content)
{
	int dd, k, file = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file = 0; text_content[file];)
			file++;
	}

	dd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	k = write(dd, text_content, file);

	if (dd == -1 || k == -1)
		return (-1);

	close(dd);

	return (1);
}

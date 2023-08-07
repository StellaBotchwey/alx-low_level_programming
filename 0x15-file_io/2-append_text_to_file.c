#include "main.h"

/**
 * append_text_to_file - function that appends text at the
 * end of a file
 * @filename: is the name of the file
 * @text_content: the NULL terminated string
 * to add at the end of the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, k, file = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (file = 0; text_content[file];)
			file++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	k = write(i, text_content, file);

	if (i == -1 || k == -1)
		return (-1);

	close(i);

	return (1);
}

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile-  function that reads a text file
 * and prints it to the POSIX standard output
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: the actual number of letters
 * it could read and print
 * and 0 if the  file can not be opened or read
 * and 0 if filename is NULL
 * and 0 f write fails or does not write
 * the expected amount of bytes
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *p;
	ssize_t dd;
	ssize_t k;
	ssize_t s;

	dd = open(filename, O_RDONLY);
	if (dd == -1)
		return (0);
	p = malloc(sizeof(char) * letters);
	s = read(dd, p, letters);
	k = write(STDOUT_FILENO, p, s);

	free(p);
	close(dd);
	return (k);
}

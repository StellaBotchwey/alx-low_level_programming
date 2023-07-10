#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - to create an array of char
 * @c: the character of whose address is being returned
 * @size: the size of the memory to print
 *
 * Return: Null
 */
char *create_array(unsigned int size, char c)
{
	char *p;
	unsigned int i;

	p = malloc(sizeof(char) * size);

	if (size == 0)
	{
		return (NULL);
	}

	if (p == 0)
	{
		return (NULL);
	}

	for (i = 0; i < size; i++)
		p[i] = c;
	{
		return (p);
	}
}

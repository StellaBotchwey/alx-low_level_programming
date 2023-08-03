#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b:  points to a string of 0 and 1 chars
 *
 * Return: the converted number,
 * or 0 if there is one or more chars in the string b
 * that is not 0 or 1 b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	int conv;
	unsigned int integer = 0;

	if (!b)
		return (0);

	for (conv = 0; b[conv]; conv++)
	{
		if (b[conv] < '0' || b[conv] > '1')
			return (0);
		integer = 2 * integer + (b[conv] - '0');
	}

	return (integer);
}

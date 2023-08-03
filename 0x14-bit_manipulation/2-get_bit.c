#include "main.h"

/**
 * get_bit - function that returns a bit
 * at a given index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit at index
 * index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int ret_bit;

	if (index > 63)
		return (-1);

	ret_bit = (n >> index) & 1;

	return (ret_bit);
}

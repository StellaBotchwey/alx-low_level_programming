#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: number 1
 * @m: number 2
 *
 * Return: the number of bits you would need
 * to flip to get from one number to another
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int faith;
	unsigned long int faith2 = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		faith = faith2 >> k;
		if (faith & 1)
			count++;
	}

	return (count);
}

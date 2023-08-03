#include "main.h"

/**
 * print_binary - function that prints the binary
 * equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int k, count = 0;
	unsigned long int faith;

	for (k = 63; k >= 0; k--)
	{
		faith = n >> k;

		if (faith & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - to prints the minimum number of coins to
 * make change for an amount of money
 * @argc: number command line of arguments
 * @argv: array of command line arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, l, output;
	int cent[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	i = atoi(argv[1]);
	output = 0;

	if (i < 0)
	{
		printf("0\n");
		return (0);
	}

	for (l = 0; l < 5 && i >= 0; l++)
	{
		while (i >= cent[l])
		{
			output++;
			i -= cent[l];
		}
	}
	printf("%d\n", output);
	return (0);
}

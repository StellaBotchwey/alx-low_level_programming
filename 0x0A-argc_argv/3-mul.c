#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main -to  multiplies two numbers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int output, num1, num2;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	output = num1 * num2;

	printf("%d\n", output);

	return (0);
}

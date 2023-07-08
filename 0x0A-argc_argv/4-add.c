#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	return (c >= '0' && c <= '9');
}

/**
 * main - to add positive integers
 * @argc: number of command line arguments
 * @argv: array of command line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i = 0;
	int j;
	int k;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (j = 1; j < argc; j++)
	{

		for (k = 0; argv[j][k] != '\0'; k++)
		{
			if (!_isdigit(argv[j][k]))
			{
				printf("Error\n");
				return (1);
			}
		}
		i += atoi(argv[j]);
	}
	printf("%d\n", i);
	return (0);
}

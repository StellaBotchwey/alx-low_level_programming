#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: number of program arguments
 * @argv: array of program arguments
 *
 * Return: 0 Always (Success)
 */
int main(int argc, char *argv[])
{
	int bytes, l;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;

	for (l = 0; l < bytes; l++)
	{
		if (l == bytes - 1)
		{
			printf("%02hhx\n", arr[l]);
			break;
		}
		printf("%02hhx ", arr[l]);
	}
	return (0);
}

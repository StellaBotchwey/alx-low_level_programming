#include "main.h"
#include <stdio.h>

/**
 * main -To prints all arguments it receives
 * @argc: The number of command line arguments
 * @argv: array ofcommand line arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
	{
		printf("%s\n", argv[a]);
	}

	return (0);
}

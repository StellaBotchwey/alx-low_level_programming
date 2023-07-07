#include "main.h"
#include <stdio.h>

/**
 * main - to print th program name
 * @argc: number of command line arguments
 * @argv: the size of array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);

	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * main - To print the number of arguments passed to the program
 * @argc: number of command line arguments
 * @argv: array contaning the command line arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
(void) argv; /*Ignore argv*/
	printf("%d\n", argc - 1);

	return (0);
}

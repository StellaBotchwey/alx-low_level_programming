#include "main.h"

/**
  * _puts - checks the function that should print a string
  * @str: points to the string
  * Return: string with a newline
  */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

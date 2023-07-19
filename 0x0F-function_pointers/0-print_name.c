#include "function_pointers.h"
#include <stdio.h>
#include <stddef.h>
/**
 * print_name - to print a name using the function pointer
 * @name: string to add
 * @f: pointer
 * Return: 0 Always(success)
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}

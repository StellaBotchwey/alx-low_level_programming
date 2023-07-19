#include "function_pointers.h"
#include <stdio.h>

/**
 * array_iterator - prints each array elem on a newl
 * @array:an array
 * @size: size of an array
 * @action: pointer to the function needed to be used
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

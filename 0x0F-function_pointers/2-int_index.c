#include "function_pointers.h"
/**
 * int_index -  returns the index of the first element for which the
 *cmp function does not return 0, If no element matches, return -1
 * @array: array
 * @size: number of size in the array
 * @cmp:  is a pointer to the function to be used to compare values
 * Return: 0Always(success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int k;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (k = 0; k < size; k++)
	{
		if (cmp(array[k]))
			return (k);
	}
	return (-1);
}

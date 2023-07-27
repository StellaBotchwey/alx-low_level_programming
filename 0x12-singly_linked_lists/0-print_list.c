#include "lists.h"
#include <stdio.h>
#include <stddef.h>
/**
  * print_list - function that prints all the elements of a list_t list
  * @p: pointer to the list_t list to print
  *
  * Return:  the number of nodes
 */
size_t print_list(const list_t *p)
{
	size_t faith = 0;

	while (p)
	{
		if (!p->str)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", p->len, p->str);
		p = p->next;
		faith++;
	}

	return (faith);
}

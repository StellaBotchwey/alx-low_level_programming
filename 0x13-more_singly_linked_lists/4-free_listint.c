#include "lists.h"

/**
 * free_listint - function that frees a linked list
 * @p: listint_t list to be freed
 */
void free_listint(listint_t *p)
{
	listint_t *temp;

	while (p)
	{
		temp = p->next;
		free(p);
		p = temp;
	}
}

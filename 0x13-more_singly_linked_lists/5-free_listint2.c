#include "lists.h"

/**
 * free_listint2 - function that frees a linked list
 * @p: pointer to the listint_t list to be freed
 */
void free_listint2(listint_t **p)
{
	listint_t *temp;

	if (p == NULL)
		return;

	while (*p)
	{
		temp = (*p)->next;
		free(*p);
		*p = temp;
	}

	*p = NULL;
}

#include "lists.h"

/**
 * reverse_listint - function that reverses a linked list
 * @p: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
 */
listint_t *reverse_listint(listint_t **p)
{
	listint_t *rev_ptr = NULL;
	listint_t *next = NULL;

	while (*p)
	{
		next = (*p)->next;
		(*p)->next = rev_ptr;
		rev_ptr = *p;
		*p = next;
	}

	*p = rev_ptr;

	return (*p);
}

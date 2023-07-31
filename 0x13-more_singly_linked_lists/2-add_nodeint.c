#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @p: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return:  the address of the new element,
 * or NULL if it failed
 */
listint_t *add_nodeint(listint_t **p, const int n)
{
	listint_t *ptr;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = *p;
	*p = ptr;

	return (ptr);
}

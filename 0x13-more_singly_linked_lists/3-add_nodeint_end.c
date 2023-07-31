#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @p: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **p, const int n)
{
	listint_t *ptr;
	listint_t *temp = *p;

	ptr = malloc(sizeof(listint_t));
	if (!ptr)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (*p == NULL)
	{
		*p = ptr;
		return (ptr);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = ptr;

	return (ptr);
}

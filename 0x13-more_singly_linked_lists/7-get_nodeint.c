#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at a certain index in a linked list
 * @p: first node in the linked list
 * @ind: index of the node to return
 *
 * Return:  the nth node of a listint_t linked list
 */
listint_t *get_nodeint_at_index(listint_t *p, unsigned int ind)
{
	unsigned int k = 0;
	listint_t *temp = p;

	while (temp && k < ind)
	{
		temp = temp->next;
		k++;
	}

	return (temp ? temp : NULL);
}

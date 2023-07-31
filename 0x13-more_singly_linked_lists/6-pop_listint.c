#include "lists.h"

/**
 * pop_listint - function to delete the head node of a linked list
 * @p: pointer to the first element in the linked list
 *
 * Return: the head node’s data (n)
 */
int pop_listint(listint_t **p)
{
	listint_t *temp;
	int i;

	if (!p || !*p)
		return (0);

	i = (*p)->n;
	temp = (*p)->next;
	free(*p);
	*p = temp;

	return (i);
}

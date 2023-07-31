#include "lists.h"

/**
 * insert_nodeint_at_index - function to inserts a new node in a linked list,
 * at a given position
 * @p: pointer to the first node in the list
 * @ind: index where the new node is added
 * @n: data to insert in the new node
 *
 * Return: the address new node,
 * or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **p, unsigned int ind, int n)
{
	unsigned int k;
	listint_t *ptr;
	listint_t *temp = *p;

	ptr = malloc(sizeof(listint_t));
	if (!ptr || !p)
		return (NULL);

	ptr->n = n;
	ptr->next = NULL;

	if (ind == 0)
	{
		ptr->next = *p;
		*p = ptr;
		return (ptr);
	}

	for (k = 0; temp && k < ind; k++)
	{
		if (k == ind - 1)
		{
			ptr->next = temp->next;
			temp->next = ptr;
			return (ptr);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

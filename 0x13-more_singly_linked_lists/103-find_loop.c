#include "lists.h"

/**
 * find_listint_loop - function that finds the
 * loop in a linked list
 * @p: linked list to search for
 *
 * Return: The address of the node where the loop starts,
 * or NULL if there is no loop
 */
listint_t *find_listint_loop(listint_t *p)
{
	listint_t *i = p;
	listint_t *k = p;

	if (!p)
		return (NULL);

	while (i && k && k->next)
	{
		k = k->next->next;
		i = i->next;
		if (k == i)
		{
			i = p;
			while (i != k)
			{
				i = i->next;
				k = k->next;
			}
			return (k);
		}
	}

	return (NULL);
}

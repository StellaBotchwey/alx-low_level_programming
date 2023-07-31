#include "lists.h"

/**
 * free_listint_safe - function that frees a linked list
 * @p: pointer to the first node in the linked list
 *
 * Return: the size of the list that was freed
 */
size_t free_listint_safe(listint_t **p)
{
	size_t s = 0;
	int f;
	listint_t *temp;

	if (!p || !*p)
		return (0);

	while (*p)
	{
		f = *p - (*p)->next;
		if (f > 0)
		{
			temp = (*p)->next;
			free(*p);
			*p = temp;
			s++;
		}
		else
		{
			free(*p);
			*p = NULL;
			s++;
			break;
		}
	}

	*p = NULL;

	return (s);
}

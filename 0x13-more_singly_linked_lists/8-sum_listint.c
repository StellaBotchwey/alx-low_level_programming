#include "lists.h"

/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @p: first node in the linked list
 *
 * Return:  the sum of all the data (n) of a listint_t linked list
 */
int sum_listint(listint_t *p)
{
	int sum = 0;
	listint_t *temp = p;

	while (temp)
	{
		sum += temp->n;
		temp = temp->next;
	}

	return (sum);
}

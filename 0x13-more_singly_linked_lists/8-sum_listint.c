#include "lists.h"

/**
 * sum_listint - Add all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return:  Sum
 */

int sum_listint(listint_t *head)

{
	int sum = 0;
	listint_t *ptr = head;

	while (ptr)
	{
		sum += ptr->n;
		ptr = ptr->next;
	}

	return (sum);
}

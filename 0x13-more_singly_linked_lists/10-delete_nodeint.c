#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at index
 * @head: Pointer to the first element
 * @index: Node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)

{
	listint_t *previous = *head;
	listint_t *current = NULL;
	unsigned int i = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(previous);
		return (1);
	}

	while (i < index - 1)
	{
		if (!previous || !(previous->next))
			return (-1);
	previous = previous->next;
	i++;
	}

	current = previous->next;
	previous->next = current->next;
	free(current);

	return (1);
}

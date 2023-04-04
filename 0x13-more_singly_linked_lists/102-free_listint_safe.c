#include "lists.h"

/**
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node
 *
 * Return: number of elements
 */
size_t free_listint_safe(listint_t **h)

{
	size_t lenght = 0;
	int diff;
	listint_t *current;

	if (!h || !*h)
		return (0);

	while (*h)
	{
	diff = *h - (*h)->next;
	if (diff > 0)
	{
	current = (*h)->next;
	free(*h);
	*h = current;
	lenght++;
	}
	else
	{
		free(*h);
		*h = NULL;
		lenght++;
	break;
	}
	}

	*h = NULL;

	return (lenght);
}

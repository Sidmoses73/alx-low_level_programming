#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node in a position
 * @head: pointer to the first node in the list
 * @idx: Add new node here
 * @n: Data inserted
 *
 * Return: Pointer or NULL
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	unsigned int i;
	listint_t *new_node;
	listint_t *ptr = *head;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	for (i = 0; ptr && i < idx; i++)
	{
		if (i == idx - 1)
		{
			new_node->next = ptr->next;
			ptr->next = new_node;
			return (new_node);
		}
		else
			ptr = ptr->next;
	}

	return (NULL);
}

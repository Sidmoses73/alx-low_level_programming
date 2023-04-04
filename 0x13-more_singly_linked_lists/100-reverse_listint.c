#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list
 * @head: This is the pointer to the first node
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)

{
	listint_t *current = *head;
	listint_t *prev_node = NULL;
	listint_t *next_node = NULL;

	while (current != NULL)
	{
	next_node = current->next;
	current->next = prev_node;
	prev_node = current;
	current = next_node;
	}

	*head = prev_node;

	return (*head);
}

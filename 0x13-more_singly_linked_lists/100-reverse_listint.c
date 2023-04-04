#include "lists.h"

/**
 * reverse_listint - Function that reverses a linked list
 * @head: This is the pointer to the first node
 *
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current_node = NULL;
	listint_t *next_node = NULL;

	while (*head)
	{
	next_node = (*head)->next_node;
	(*head)->next_node = current_node;
	current_node = *head;
	*head = next_node;
	}

	*head = current_node;

	return (*head);
}

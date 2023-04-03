#include "lists.h"

/**
 * pop_listint - deletes the head node
 * @head: pointer to the first element
 *
 * Return: the data inside the elements or 0 if empty
 */
int pop_listint(listint_t **head)

{
	listint_t *ptr;
	int num;

	if (!head || !*head)
	return (0);

	num = (*head)->n;
	ptr = (*head)->next;
	free(*head);
	*head = ptr;

	return (num);
}

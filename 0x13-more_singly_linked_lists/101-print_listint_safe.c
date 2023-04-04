#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list.
 * @head: pointer to the head node of the list
 *
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)

{
	const listint_t *current;
	size_t count = 0;

	if (head == NULL)
		exit(98);

	current = head;

	while (current != NULL)
	{
		printf("[%p] %d\n", (void *)current, current->n);
		count++;

	/* check for loop */
	if (current->next >= current)
	{
		printf("-> [%p] %d\n", (void *)current->next, current->next->n);
		exit(98);
	}

	current = current->next;
	}

	return (count);
}

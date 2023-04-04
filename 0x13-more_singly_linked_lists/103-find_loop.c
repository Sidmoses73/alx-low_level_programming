#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: The linked list to search
 *
 * Return: The loop starts with this
 */

listint_t *find_listint_loop(listint_t *head)

{
	listint_t *walk = head;
	listint_t *haste = head;

	if (!head)
	return (NULL);

	while (walk && haste && haste->next)
	{
	haste = haste->next->next;
	walk = walk->next;
	if (haste == walk)
	{
	walk = head;
	while (walk != haste)
	{
	walk = walk->next;
	haste = haste->next;
	}
	return (walk);
	}
	walk = walk->next;
	haste = haste->next->next;
	}

	return (NULL);
}

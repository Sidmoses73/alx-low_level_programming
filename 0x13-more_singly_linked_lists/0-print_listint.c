#include "lists.h"

/**
 * print_listint - Printin all elements of of a listint_t list.
 * @h: Node to print
 *
 * Return: Numbers of nodes
 */

size_t print_listint(const listint_t *h)

{
	 size_t num = 0;

	while (h)
	{
	printf("%d\n", h->n);
	num++;
	h = h->next;
	}

	return (num);

}

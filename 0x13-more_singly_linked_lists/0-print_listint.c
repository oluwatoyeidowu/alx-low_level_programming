#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: head of list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;
	const listint_t *h = h;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		num_nodes += 1;
	}
	return (num_nodes);
}

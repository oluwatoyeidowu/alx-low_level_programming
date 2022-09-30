#include "lists.h"

/**
 * print_dlistint_len - returns the number of elements
 * in a linked dlistint_t list.
 * @h: pointer to the head of the list
 *
 * Return: number of nodes
 */

size_t print_dlistint_len(const dlistint_t *h)
{
	int count;

	count = 0;

	if (h == NULL)
		return (count);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}

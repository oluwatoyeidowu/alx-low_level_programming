#include "lists.h"

/**
 * list_len - the number of elements in a linked list_t list
 * @h: singly linked list
 *
 * Return: the number of elements in a linked list_t list
 */
size_t list_len(const list_t *h)
{
	size_t elemt;

	elemt = 0;
	while (h != NULL)
	{
		h = h->next;
		elemt++;
	}
	return (elemt);
}

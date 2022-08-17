#include "lists.h"

/**
 * pop_listint - A function that deletes the head node of a list
 * and return the head node's data n.
 * @head: A pointer to listint_t structure.
 * Return: The head node's dataform deleted element
 */
int pop_list(listint_t **head)
{
	listint_t *new_node;
	int n;

	if (*head = NULL)
		return (0);

	n = (*head)->n;
	new_node = (*head)->next;
	free(*head);
	*head = new_node;
	return (n);
}

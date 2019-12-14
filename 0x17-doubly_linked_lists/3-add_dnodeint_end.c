#include "lists.h"
/**
 *add_dnodeint_end - that adds a new node at the end of a dlistint_t list.
 *@head: the the beginning of the list
 *@n: constant integer
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *node;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	node = *head;

	while (node != NULL)
	{
		if (node->next == NULL)
			break;
		node = node->next;
	}
	node->next = new;
	new->prev = node;
	return (new);
}

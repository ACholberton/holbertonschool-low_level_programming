#include "lists.h"
/**
 *add_dnodeint - will add a node at the beginning of the list
 *@head: is where the list starts
 *@n: the position of the node
 *Return: the address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	new->next = *head;
	(*head)->prev = new;
	*head = new;

	return (*head);
}

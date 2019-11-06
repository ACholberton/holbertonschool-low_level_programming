#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *pop_listint - will delete a node in the list
 *@head: the node to be deleted
 *Return: returns the head node’s data
 */
int pop_listint(listint_t **head)
{
	int a;
	listint_t *tmp, *hold;

	tmp = *head;

	if (head == NULL)
	{
		return (0);
	}
	if (tmp != NULL)
	{
		hold = tmp->next;
		a = tmp->n;
		free(tmp);
		*head = hold;
	}
	return (a);
}

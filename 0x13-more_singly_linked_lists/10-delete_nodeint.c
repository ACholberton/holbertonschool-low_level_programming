#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *delete_node_at_index - will delete a node at index of index
 *@head: pointer
 *@index: is the index of the node that should be deleted
 *Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp, *delete;
	unsigned int i = 0;

	if (*head == NULL)
	{
		return (-1);
	}
	tmp = *head;

	if (index == 0)
	{
		delete = *head;
		*head = (*head)->next;
		free(delete);
		return (1);
	}
	for (i = 0; i < index - 1; i++)
	{
		if (tmp->next == NULL)
		{
			return (-1);
		}
		tmp = tmp->next;
	}
	if (i != index - 1)
	{
		return (-1);
	}
	delete = tmp->next;
	tmp->next = delete->next;
	free(delete);

	return (1);
}

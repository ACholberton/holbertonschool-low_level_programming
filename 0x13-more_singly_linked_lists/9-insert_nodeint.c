#include "lists.h"
#include <stdlib.h>
/**
 *insert_nodeint_at_index - will insert a new node at n location within a list
 *@head: is the last point given
 *@idx: is the index that the node will be added to
 *@n: is the node
 *Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp = *head;
	listint_t *new;
	unsigned int i = 0;

	if (tmp == NULL)
	{
		return (NULL);
	}

	new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	for (i = 0; tmp != NULL; i++)
	{
		if (idx == 0)
		{
			new->n = n;
			new->next = *head;
			*head = new;
			return (new);
		}
		else if (i == (idx - 1))
		{
			new->n = n;
			new->next = tmp->next;
			tmp->next = new;
			return (new);
		}
		tmp = tmp->next;
	}
	free(new);
	return (NULL);
}

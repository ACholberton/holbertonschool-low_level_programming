#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *get_nodeint_at_index - will return the nth node of a list
 *@head: is the node
 *@index:is the index of the node, starting at 0
 *Return: node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		head = head->next;
		i++;
	}
	return (NULL);
}

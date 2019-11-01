#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *add_node_end - will add a node at the end of the list
 *@head: is th ebeginning of the list
 *@str: is the node to be added
 *Return:the address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *holder;
	char *end;
	int lenofname;

	holder = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
	{
		return (NULL);
	}

	end = strdup(str);
	if (end == NULL)
	{
		free(new);
		return (NULL);
	}
	new->str = end;
	lenofname = 0;
	while (str[lenofname])
	{
		lenofname++;
	}
	new->len = lenofname;
	new->next = NULL;

	if (holder == NULL)
	{
		*head = new;
	}
	else
	{
		while (holder->next != NULL)
		{
			holder = holder->next;
		}
		holder->next = new;
	}
	return (new);
}

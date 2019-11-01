#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *add_node - will ad a node to the array of elements
 *@head: is the top of the array
 *@str: is the string to be added
 *Return: address of new element of NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	char *buffer;
	int lenofname;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	buffer = strdup(str);
	if (buffer == NULL)
	{
		free(new);
		return (NULL);
	}
	if (*head == NULL)
		new->next = NULL;

	new->next = *head;
	*head = new;
	new->str = buffer;

	lenofname = 0;
	while (str[lenofname])
		lenofname++;

	new->len = lenofname;

	return (new);
}

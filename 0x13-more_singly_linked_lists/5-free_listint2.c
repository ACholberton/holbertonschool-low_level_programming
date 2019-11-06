#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 *free_listint2 - will free the list and set head to NULL
 *@head: is the node to be freed
 *Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *a;

	if (head == NULL)
	{
		return;
	}
	for (a = *head; a != NULL; a = a->next)
	{
		free(a);
	}
	*head = NULL;
}

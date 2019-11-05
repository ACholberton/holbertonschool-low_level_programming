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

	if (head != NULL)
	{
		*head = NULL;
	}
	while (a != NULL)
	{
		head = a;
		a = a->next;
		free(head);
		free(a);
	}
}

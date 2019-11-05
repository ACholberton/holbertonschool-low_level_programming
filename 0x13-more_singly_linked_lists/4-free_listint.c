#include "lists.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 *free_listint - will free the list
 *@head: the part to be freed
 *Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *a;

	while (a != NULL)
	{
		head = a;
		a = a->next;
		free(head);
		free(a);
	}
}

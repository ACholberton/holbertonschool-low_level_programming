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

	for (a = head; a != NULL; a = a->next)
	{
		free(a);
	}
}

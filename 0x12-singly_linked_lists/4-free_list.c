#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_list - will free up the list
 *@head: is what is being freed
 *Return:  void
 */
void free_list(list_t *head)
{
	list_t *a = 0;

	while (head != NULL)
	{
		free(head->next);
		free(a);
		head = a;
	}
}

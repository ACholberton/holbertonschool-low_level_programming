#include "lists.h"
/**
 *free_list - will free up the list
 *@head: is what is being freed
 *Return:  void
 */
void free_list(list_t *head)
{
	list_t *a;

	for (a = head; a != NULL; a = a->next)
	{
		free(a->str);
		free(a);
	}
}

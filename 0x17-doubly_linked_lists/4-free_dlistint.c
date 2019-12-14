#include "lists.h"
/**
 *free_dlistint - is a function that frees a dlisntint_t list
 *@head: is the beginning of the list
 *Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tempnode;

	tempnode = head;

	if (head == NULL)
		return;

	while (tempnode != NULL)
	{
		tempnode = head->next;
		free(head);
		head = tempnode;
	}
}

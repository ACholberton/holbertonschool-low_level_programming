#include "lists.h"
#include <stdlib.h>
/**
 *sum_listint - will sum all data on a list
 *@head: is the sum
 *Return: the sum of all data
 */
int sum_listint(listint_t *head)
{
	int counter = 0;

	if (head == NULL)
	{
		return (0);
	}
	while (head != NULL)
	{
		counter += head->n;
		head = head->next;
	}
	return (counter);
}

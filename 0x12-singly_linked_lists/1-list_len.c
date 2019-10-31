#include "lists.h"
#include <stdio.h>
/**
 *list_len - returns number of elements in lists
 *@h: the nodes
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int elements = 0;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}

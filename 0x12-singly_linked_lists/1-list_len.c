#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *list_len - returns number of elements in lists
 *@h: the nodes
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	int elements;

	while (h != NULL)
	{
		elements++;
		h = h->next;
	}
	return (elements);
}
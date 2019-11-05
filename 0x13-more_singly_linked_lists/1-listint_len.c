#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 *listint_len - will return the number of elements in a list
 *@h: is the nodes of a list
 *Return: number of elements
 */
size_t listint_len(const listint_t *h)
{
	size_t a = 0;

	while (h != NULL)
	{
		a++;
		h = h->next;
	}
	return (a);
}

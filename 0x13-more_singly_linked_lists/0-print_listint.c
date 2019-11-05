#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *print_listint - will print all elements of the list
 *@h: is the number of nodes
 *Return: the number if nodes printed
 */
size_t print_listint(const listint_t *h)
{
	size_t elements = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		elements++;
		h = h->next;
	}
	return (elements);
}

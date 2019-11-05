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
	long unsigned int elements = 0;

	while (h != NULL)
	{
		elements++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (elements);
}

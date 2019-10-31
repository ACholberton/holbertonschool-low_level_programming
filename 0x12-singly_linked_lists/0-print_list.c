#include "lists.h"
#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>
/**
 *print_list - will print all elements of a list
 *@h: are the elemets to be printed
 *Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int elements = 0;

	while (h != NULL)
	{
		elements++;

		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (elements);
}

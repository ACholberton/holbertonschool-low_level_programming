#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - this function returns the lenght of  string
 *@s: is a string
 *Return: lenght
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (*s)
	{
		s++;
		l++;
	}
	return (l);
}
/**
 *list_len - returns number of elements in lists
 *@h: the nodes
 *Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t elements;

	while (h != NULL)
	{
		h = h->next;
		elements++;
	}
	return (elements);
}

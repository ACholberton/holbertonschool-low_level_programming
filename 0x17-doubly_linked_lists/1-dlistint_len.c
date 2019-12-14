#include "lists.h"
/**
 *dlistint_len - will return the number of elements in a double linked list
 *@h: is the head
 *Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	unsigned int elements = 0;
	const dlistint_t *node = h;

	while (node)
	{
		node = node->next;
		elements++;
	}
	return (elements);
}

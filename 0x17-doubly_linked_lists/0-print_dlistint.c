#include "lists.h"
/**
 *print_dlistint - a function that prints all the elements of dlistint_t list.
 *@h: is the nodes to be printed
 *Return: the number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	unsigned int elements = 0;
	const dlistint_t *node = h;

	while (node)
	{
		printf("%d\n", node->n);
		node = node->next;
		elements++;
	}
	return (elements);
}

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *add_nodeint - will add a node to the beginning of a list
 *@head: is the beginning of the list
 *@n: is the node to be added
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *NN;

	NN = malloc(sizeof(listint_t));
	if (NN == NULL)
	{
		return (NULL);
	}
	NN->next = *head;
	*head = NN;
	NN->n = n;
	return (NN);
}

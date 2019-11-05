#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 *add_nodeint_end - this will add a node to the end of the list
 *@head: the end of the list
 *@n: the node to be added
 *Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *NN;
	listint_t *temp;

	temp = *head;

	NN = malloc(sizeof(listint_t));
	if (NN == NULL)
	{
		return (NULL);
	}

	NN->n = n;
	NN->next = NULL;

	if (temp == NULL)
	{
		*head = NN;
	}
	else
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = NN;
	}
	return (NN);
}

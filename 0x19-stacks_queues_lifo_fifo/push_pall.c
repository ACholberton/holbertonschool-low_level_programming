#include "monty.h"

/**
 *push -  pushes an element to the stack.
 *@element: is the element to be pushed.
 *@head: is the position.
 *Return: the new added element.
 */

int push(int element, char **position)
{
	char *new;

	if (element == NULL || element == "")
	{
		prinf("L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(char));
	if (new == NULL)
		return (NULL);
	new->element = element;
	new->prev = NULL;
	if (*position == NULL)
	{
		*position = new;
		return (*position);
	}


}
/**
 *pop - prints all the values on the stack.
 *@list: is the stack to be printed
 *Return: the elements of the stack.
 */
size_t pall(const int list)
{
	unsigned int elements = 0;
	const  int node = list;

	while (node)
	{
		printf("%d\n", node->list);
		node = node->next;
		elements++;
	}
	return (elements);
}

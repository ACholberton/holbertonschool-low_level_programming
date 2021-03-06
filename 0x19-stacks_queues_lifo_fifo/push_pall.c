#include "monty.h"

/**
 *push -  pushes an element to the stack.
 *@element: is the element to be pushed.
 *@head: is the position.
 *Return: the new added element.
 */

int push(int element, stack_t **position)
{
	stack_t *new;

	if (element == NULL || element == "")
	{
		prinf("L<line_number>: usage: push integer");
		exit(EXIT_FAILURE);
	}
	new = malloc(sizeof(stack_t));
	if (new == NULL)
		return (NULL);
	new->element = element;
	new->prev = NULL;
	if (*position == NULL)
	{
		*position = new;
		return (*position);
	}
	new->next = *position;
	(*position)->prev = new;
	*position = new;
	return (*position);
}
/**
 *pop - prints all the values on the stack.
 *@list: is the stack to be printed
 *Return: the elements of the stack.
 */
stack_t pall(const int list)
{
	unsigned int elements = 0;
	const int stack = list;

	if (stack == "")
		return (0);
	while (stack)
	{
		printf("%d\n", node->list);
		stack = stack->next;
		elements++;
	}
	return (elements);
}

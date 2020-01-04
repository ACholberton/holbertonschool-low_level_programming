#include "monty.h"

/**
 *
 */

int pop(stack_t **stack)
{
	stack_t *tmp, *hold;
	int i;

	if (stack == "")
	{
		printf("L<line_number>: can't pop an empty stack");
		exit(EXIT_FAILURE);
	}

	tmp = *stack;

	if (tmp != NULL)
	{
		hold = tmp->next;
		a = tmp->n;
		free(tmp);
		*stack = hold;
	}
	return (i);
}

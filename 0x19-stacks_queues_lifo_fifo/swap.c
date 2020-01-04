#include "monty.h"
/**
 *swap - swaps the top two elements of the stack.
 *@stack: is the stack
 *@a:first element
 *@b: second element
 *Return: the stack
 */

int swap(stack_t **stack, int *a, int *b)
{
	int tmp;

	if (*stack < 2)
	{
		printf("L<line_number>: can't swap, stack too short");
		exit(EXIT_FAILURE);
	}
	tmp = *a;
	*a = *b;
	*b = tmp;
	*stack = tmp;

	return (*stack);
}

#include "monty.h"
/**
 *
 */

int pint(const int element, char **position)
{
	char *new;

	new = malloc(sizeof(char));

	if (new = NULL)
		return (NULL);
	if (element == NULL || element == "")
	{
		printf("L<line_number>: can't pint, stack empty");
		exit(EXIT_FAILURE);
	}
	new->element = element;
	new->prev = NULL;
	if (*position == NULL)
	{
		*position = new;
		return (*position);
	}
	new->next = *position;
	(*position)->prev = new;
	*head = new;

	return (new);
}

#include "monty.h"

/**
 *get_func - will call to other functions for their respective actions
 *@s:
 *@stack:
 *@line_number: is the number of lines
 *Return: the function called
 */

void (*get_func(char *s))(stack_t **stack, unsigned int line_number)
{
	int i = 0;
	instruction_t ops[] = {
		{"push", push},
		{"pall", pall},
		{"pint", pint},
		{"pop", pop},
		{"swap", swap},
		{"add", add}
		{"nop", nop}
		{NULL, NULL}
		};
/* consider using getline*/
	if (!stack)
		return (NULL);

	while (ops[i].opcode != NULL && *s == '\0')
	{
		if (*s == *(ops[i]).opcode)
			ops[i].f;
		i++;
	}
}

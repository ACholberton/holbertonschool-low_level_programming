#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *get_op_func - will selects the correct function to perform the operation
 *@s: is the parameter entered by the user
 *Return: somthing?
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while (ops[i].op != NULL && s[1] == '\0')
	{
		if (*s == *(ops[i]).op)
			return (ops[i].f);
		i++;
	}

	return (NULL);
}

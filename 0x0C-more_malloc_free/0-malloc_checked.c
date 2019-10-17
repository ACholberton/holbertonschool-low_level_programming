#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - will allocate memory using malloc
 *@b: is  an unsigned integer
 *Return: void
 */
void *malloc_checked(unsigned int b)
{
	int *point;

	point = malloc(b);

		if (point == NULL)
		{
			exit(98);
		}
	return (point);
}

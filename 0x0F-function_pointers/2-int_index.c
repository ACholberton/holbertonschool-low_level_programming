#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *int_index - this function will search for an integer
 *@array: is an array of characters
 *@size: is the size of the array
 *@cmp: is the pointer of a function that compares values
 *Return: index of the first element
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL || size <= 0)
	{
		return (-1);
	}

	for (a = 0; a < size; a++)
	{
		if ((*cmp)(array[a]))
		{
			return (a);
		}
	}
	return (-1);
}

#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 *array_iterator - function will print an array of characters
 *@array: is an array of characters
 *@size: is the size of the array
 *@action: is a pointer
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}

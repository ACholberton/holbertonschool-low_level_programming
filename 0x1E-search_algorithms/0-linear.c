#include "search_algos.h"

/**
 *linear_search - searches for a value in an array of integers using the Linear
 *search algorithm
 *@array: is the array of integers
 *@size: is the size of the array
 *@value: is the index to be returned
 *Return: value, and if its not present return -1
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int index;

	if (array == NULL || size == 0)
		return (-1);

	for (index = 0; index < size; index += 1)
	{
		printf("Value checked array[%d] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (value);
		}
	}
	return (-1);
}

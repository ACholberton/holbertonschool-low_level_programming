#include "search_algos.h"

/**
 *print_list - prints the integer array
 *@array: is the array of integers
 *@size: is the size of the array
 *@index_l: is the start of the array
 *Return: nothing.
 */

void print_list(int *array, size_t size, size_t index_l)
{
	unsigned int index = 0;

	printf("Searching in array: ");
	for (index = index_l; index < size; index++)
	{
		if (index + 1 != size)
		{
			printf("%i, ", array[index]);
		}
		else
			printf("%i ", array[index]);
	}
	printf("\n");
}

/**
 *binary_search - searches for a value in a sorted array of integers using the
 *Binary search algorithm
 *@array: is the array
 *@size: is the size fo the array
 *@value: is the value to be found
 *Return: value, if not present return -1
 */

int binary_search(int *array, size_t size, int value)
{
	unsigned int index_l = 0;
	unsigned int index_r = size - 1;
	unsigned int mid = 0;

	if (array == NULL || size == 0)
		return (-1);


	while (index_l <= index_r)
	{
		print_list(array, index_r + 1, index_l);
		mid = ((index_l + index_r) / 2);
		if (array[mid] < value)
		{
			index_l = mid + 1;
		}
		else if (array[mid] > value)
		{
			index_r = mid - 1;
		}
		else
			return (mid);
	}
	return (-1);
}

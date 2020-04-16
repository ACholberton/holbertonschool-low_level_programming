#include "search_algos.h"

/**
 *binary_search - searches for a value in a sorted array of integers using the
 *Binary search algorithm
 *@array: is the array
 *@size: is the size fo the array
 *@value is the value to be found
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
		printf("Searching in array: 0, 1, 2, 3, 4, 5, 6, 7, 8, 9\n");
		mid = ((index_l + index_r) /2 );
		if (array[mid] < value)
		{
			index_l = mid + 1;
		}
		else if(array[mid] > value)
		{
			index_r = mid - 1;
		}
		else
			return (mid);
	}
	return (-1);
}

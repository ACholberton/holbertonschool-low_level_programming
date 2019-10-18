#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *array_range - function that creates an array based on min and max values
 *@min: is an array
 *@max: is an array
 *Return: pointer
 */
int *array_range(int min, int max)
{
	int *point;
	int count, a;

	point = NULL;

	if (min > max)
	{
		return (NULL);
	}

	count = (max - min) + 1;

	point = malloc(sizeof(int) * count);

	if (point == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < count; a++)
	{
		min++;
		point[a] = min;
	}
	return (point);
}

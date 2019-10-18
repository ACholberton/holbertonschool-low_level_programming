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
	int count, a;
	int *point;

	if (min > max)
		return (NULL);

	count = max - min;

	point = malloc(sizeof(int) * (count + 1));

	if (point == NULL)
		return (NULL);

	for (a = 0; a < count + 1; a++)
	{
		point[a] = (min + a);
	}

	return (point);
}

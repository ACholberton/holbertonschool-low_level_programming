#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_calloc - Program that allocates an array of elements of size bytes
 *@nmemb: Number of elements
 *@size: the size of the array
 *Return: pointer to the first index of the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;

	char *point;

	point = NULL;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	point = malloc(nmemb * size);

	if (point == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < nmemb * size; a++)
	{
		point[a] = 0;
	}
	return (point);
}

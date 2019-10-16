#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *alloc_grid - will return a pointer to a 2 dimentional array
 *@height: is an integer
 *@width: is an integer
 *Return: 2 dimetional array
 */
int **alloc_grid(int width, int height)
{
	int **loc;
	int a, b, c;

	if (width <= 0 || height <= 0)
	{
		return ('\0');
	}
	loc = malloc(sizeof(int *) * height);
	if (loc == '\0')
	{
		return ('\0');
	}
	for (a = 0; a < height; a++)
	{
		loc[a] = malloc(sizeof(int *) * width);
			if (loc[a] == '\0')
			{
				for (b = 0; b < height; b++)
				{
					free(loc[b]);
				}
				free(loc);
				return ('\0');
			}
		for (c = 0; c < width; c++)
		{
			loc[a][c] = 0;
		}
	}
	return (loc);
}

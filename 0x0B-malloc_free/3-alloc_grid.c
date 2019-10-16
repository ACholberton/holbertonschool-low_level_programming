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
	int **dest;
	int a = 0, b = 0;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	dest = malloc(height * sizeof(int *));

	if (dest == NULL)
		return (NULL);
	for (; a < height; a++)
	{
		dest[a] = malloc(width * sizeof(int));
		if (dest[a] == NULL)
		{
			for (b = 0; b < height; b++)
				free(dest[b]);
			free(dest);
			return (NULL);
		}

		for (b = 0; b < width; b++)
		{
			dest[a][b] = 0;
		}
	}
	return (dest);
}

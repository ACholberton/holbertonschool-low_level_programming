#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created
 *@grid: is a double pointer
 *@height: is an integer
 *Return: void
 */
void free_grid(int **grid, int height)
{
	int a;

	for (a = 0; a < height; a++)
	{
		if (grid[a] != NULL)
		{
			free(grid[a]);
		}
		free(grid);
	}
}

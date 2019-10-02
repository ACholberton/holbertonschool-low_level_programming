#include "holberton.h"
#include <stdio.h>
/**
 *print_array - this function will print an array.
 *@a: is a
 *@n: is a
 *Return: array
 */
void print_array(int *a, int n)
{
	int c;

	for (c = 0; c < n; c++)
	{
		printf("%d", a[c]);
		if (c + 1 != n)
			printf(", ");
	}
	printf("\n");
}

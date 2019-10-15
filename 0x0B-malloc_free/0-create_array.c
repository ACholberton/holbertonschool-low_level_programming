#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *create_array - createsan array
 *@size: is and unsigned integer
 *@c: is a character
 *Return: specific character pointer
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *point = malloc(sizeof(char) * size);

	if (size == 0 || point == '\0')
	{
		return ('\0');
	}
	for (a = 0; a < size; a++)
	{
		point[a] = c;
	}
	return (point);
}

#include "holberton.h"
/**
 *string_toupper - will write the letters of a string in upper case
 *@UP: is a string
 *Return: string
 */
char *string_toupper(char *UP)
{
	int a;

	for (a = 0; UP[a] != '\0'; a++)
	{
		if (UP[a] >= 97 && UP[a] <= 123)
		{
			UP[a] = UP[a] - 32;
		}
	}
	return (UP);
}

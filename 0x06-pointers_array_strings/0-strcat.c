#include "holberton.h"
/**
 **_strcat - will concatenate two strings
 *@dest: is a string
 *@src: is a string
 *Return: a pointer to the resulting string
 */
char *_strcat(char *dest, char *src)
{
	int a, c, y;

	for (y = 0; dest[y] != '\0'; y++)
		;
	for (a = 0; src[a] != '\0'; a++)
		;
	for (c = 0; c < a; c++)
	{
		dest[y + c] = src[c];
	}
	dest[a + y] = '\0';
	return (dest);
}

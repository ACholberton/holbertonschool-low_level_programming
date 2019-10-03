#include "holberton.h"
/**
 **_strcat - will concatenate two strings
 *@dest: is a string
 *@src: is a string
 *@n: is a variable
 *Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, c, g;

	for (a = 0; src[a] != '\0'; a++)
		;
	for (g = 0; dest[g] != '\0'; g++)
		;
	for (c = 0; c < g; c++)
	{
		if (dest[g] > n)
			n = g + 1;
		else
		dest[c + g] = src[c];
	}
	dest[a + g] = n;
	return (dest);
}

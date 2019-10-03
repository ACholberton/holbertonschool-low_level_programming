#include "holberton.h"
/**
 *_strncat - will concatenate two strings
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
		if (dest[g] > n && src[a] < a)
		{
			n = g + a;
		}
		else
		dest[c + g] = src[c];
	}
	dest[a + g] = '\0';
	return (dest);
}

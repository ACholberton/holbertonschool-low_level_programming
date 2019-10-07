#include "holberton.h"
/**
 *_memcpy - function will copy memoryr area
 *@dest: is a string
 *@src: is a string
 *@n: is a variable
 *Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; src[a] && a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

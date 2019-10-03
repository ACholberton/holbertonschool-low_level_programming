#include "holberton.h"
/**
 *_strncpy - this function will copy a string
 *@dest: is a string
 *@src: is a string
 *@n: is avariable
 *Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int code;

	for (code = 0; src[code]; code++)
	{
		dest[code] = src[code];
	}
	for (; code < n; code++)
	{
		dest[code] = '\0';
	}
	return (dest);
}

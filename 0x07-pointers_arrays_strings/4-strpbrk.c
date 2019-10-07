#include "holberton.h"
/**
 *_strpbrk - function will search for a string for any set of bytes
 *@s: is a string
 *@accept: is a string
 *Return: bytes in s
 */
char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}
	return ('\0');
}

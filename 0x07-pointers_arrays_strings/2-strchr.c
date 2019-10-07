#include "holberton.h"
/**
 *_strchr - will locate a character in a string
 *@s: is a string
 *@c: is a variable
 *Return: string character
 */
char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}
	return (0);
}

#include "holberton.h"
/**
 *_strchr - will locate a character in a string
 *@s: is a string
 *@c: is a variable
 *Return: string character
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
		return (s);
	else
		return ('\0');
}

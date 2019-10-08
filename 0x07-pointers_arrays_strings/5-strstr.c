#include "holberton.h"
#include <stdio.h>
/**
 *_strcmp - will compare two strings
 *@s1: is a string
 *@s2: is a string
 *Return: a string
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 != *s2)
		{
			return (0);
		}
		else
		{
			s1++;
			s2++;
		}
	}
	return (1);
}
/**
 *_strstr - this function will locate a substring
 *@haystack: is a string
 *@needle: is a substring
 *Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int a, b;

	for (a = 0; haystack[a] != '\0'; a++)
	{
		for (b = 0; needle[b] != '\0'; b++)
		{
			if (_strcmp(haystack, needle) == 1)
			{
				return (haystack);
			}
			else
				haystack++;
		}
	}
	return ('\0');
}

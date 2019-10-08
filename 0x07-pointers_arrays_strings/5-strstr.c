#include "holberton.h"
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
			if (haystack[a] == needle[b])
			{
				return (needle++);
			}
		}
	}
	return ('\0');
}

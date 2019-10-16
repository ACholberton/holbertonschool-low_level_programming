#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *_strlen - this function returns the lenght of  string
 *@s: is a string
 *Return: lenght
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (*s)
	{
		s++;
		l++;
	}
	return (l);
}
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
/**
 *argstostr - concatenates all the arguments of your program
 *@ac: is an integer
 *@av: is a double pointer
 *Return: pointer
 */
char *argstostr(int ac, char **av)
{
	char *point;
	int strlen, a;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		strlen = strlen + _strlen(av[a]) + 1;
	}

	point = malloc(sizeof(char) * strlen);

	if (point == NULL)
	{
		return (NULL);
	}
	for (a = 0; a < ac; a++)
	{
		_strcat(point, av[a]);
		_strcat(point, "\n");
	}
	if (point == NULL)
	{
		return (NULL);
	}
	return (point);
}

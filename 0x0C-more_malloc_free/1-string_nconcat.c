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
 *string_nconcat - will concatenate two strings
 *@s1: is a string
 *@s2: is a string
 *@n: is an unsigned integer
 *Return: pointer to the new allocated space
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *point;
	unsigned int a, b;
	unsigned int length1, length2, NEWL;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	length1 = _strlen(s1);
	length2 = _strlen(s2);

	if (n >= length2)
	{
		n = length2;
	}

	NEWL = length1 + length2;

	point = (char *)malloc((sizeof(char) * (NEWL + 1)));

	if (point == '\0')
	{
		return (NULL);
	}
	for (a = 0; a < length1; a++)
	{
		point[a] = s1[a];
	}
	for (b = 0; b < n; b++)
	{
		point[a + b] = s2[b];
	}
	point[a + n] = '\0';
	return (point);
}

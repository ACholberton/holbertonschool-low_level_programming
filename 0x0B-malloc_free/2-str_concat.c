#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
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
 *str_concat - will concatenate two strings
 *@s1: is a string
 *@s2: is a string
 *Return: Point in newly allocated space
 */
char *str_concat(char *s1, char *s2)
{
	char *point;
	int x, y;
	int s1length, s2length, s3sum;

	if (s1 == '\0')
		s1 = "";
	if (s2 == '\0')
		s2 = "";

	s1length = _strlen(s1);
	s2length = _strlen(s2);
	s3sum = s2length + s1length;

	point = (char *)malloc((sizeof(char) * (s3sum + 1)));

	if (point == '\0')
	{
		return ('\0');
	}

	for (x = 0; x < s1length; x++)
	{
		point[x] = s1[x];
	}
	for (y = 0; y < s2length; y++)
	{
		point[x + y] = s2[y];
	}
	point[x + y] = '\0';
	return (point);
}

#include "holberton.h"
/**
 *_strcmp - will compare two strings
 *@s1: is a string
 *@s2: is a string
 *Return: a string
 */
int _strcmp(char *s1, char *s2)
{
	int a, compare;

	for (a = 0; s1[a] != '\0';)
	{
		if (s1[a] == s2[a])
		{
			compare = s1[a] - s2[a];
			a++;
		}
		else
		{
			compare = s1[a] - s2[a];
			break;
		}
	}
	return (compare);
}

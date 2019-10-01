#include "holberton.h"
/**
 *_strlen - this function returns the lenght of  string
 *@s: is a string
 *return: lenght
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

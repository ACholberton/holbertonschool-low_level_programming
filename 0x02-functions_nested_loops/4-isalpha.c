#include "holberton.h"
/**
 *_isalpha - will check for letters in lower and upper case
 *@c: is a variable
 *Return: void
 */
int _isalpha(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

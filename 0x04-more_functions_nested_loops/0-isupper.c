#include "holberton.h"
/**
 *_isupper - This function will return a value of 1 for upper case variables
 *@c: is a variable
 *Return: will be 1 for upper case and 0 for lowercase
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

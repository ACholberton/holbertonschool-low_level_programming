#include "holberton.h"
/**
 *_isdigit - function will return value of 1 if the variable is a digit
 *@c: is a variable
 *Return: 1
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

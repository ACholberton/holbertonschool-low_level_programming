#include "holberton.h"
/**
 *
 *
 *Return: will be 1
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

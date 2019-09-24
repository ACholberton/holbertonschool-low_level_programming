#include "holberton.h"
/**
 *_islower - will check for a lower case letter
 *@c: its a variable
 *Return: will be 1 if its lower case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

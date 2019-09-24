#include "holberton.h"
/**
 *_abs - this function will compute the absolute value of an integer
 *@a: is a variable
 *Return: void
 */
int _abs(int a)
{
	if (a < 0)
		return (a * -1);
	else
		     return (a * 1);
}

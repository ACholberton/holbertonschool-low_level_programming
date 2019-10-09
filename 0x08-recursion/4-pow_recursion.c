#include "holberton.h"
/**
 *_pow_recursion - function will return the value of x to the power of y
 *@x: is a variable
 *@y: is a variable
 *Return: value of x
 */
int _pow_recursion(int x, int y)
{
	int a;

	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else if (y % 2 == 0)
	{
		a = _pow_recursion(x, y / 2);
		return (a * a);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}

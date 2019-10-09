#include "holberton.h"
/**
 *_sqrt_helper - is a helper function
 *@a: is a variable
 *@n: original variable
 *Return: helper
 */
int _sqrt_helper(int a, int n)
{
	if (n == a * a)
	{
		return (a);
	}
	else if (n < (a * a))
	{
		return (-1);
	}
	else
	{
		return (_sqrt_helper(a + 1, n));
	}
}
#include "holberton.h"
/**
 *_sqrt_recursion - function will return the natual square root of a number"
 *@n: is a variable
 *Return: square root
 */
int _sqrt_recursion(int n)
{
	if (n == 1 && n == 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
		return (_sqrt_helper(1, n));
}

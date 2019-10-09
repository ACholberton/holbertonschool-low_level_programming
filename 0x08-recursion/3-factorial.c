#include "holberton.h"
/**
 *factorial - function returns the factorial given to a number
 *@n: is a variable
 *Return: factorial
 */
int factorial(int n)
{
	if (n > 0)
	{
		return (n * factorial(n -1));
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (1);
	}
}

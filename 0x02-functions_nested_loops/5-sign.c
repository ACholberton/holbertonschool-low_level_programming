#include "holberton.h"
/**
 *print_sign - will print positive and negative signs
 *@n: is a variable
 *Return: void
 */

int print_sign(int n)
{

	if (n > 0)
	{	_putchar('+');
		return (1);
	}
	else if (n < 0)
	{	_putchar('-');
		return (-1);
	}
	else
	{       _putchar('0');
		return (0);
	}
}

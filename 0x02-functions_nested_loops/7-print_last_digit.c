#include "holberton.h"
/**
 *print_last_digit - this function will print the last digit of a number
 *@a: is a variable
 *Return: void
 */
int print_last_digit(int a)
{
	if (a < 0)
	{
		a %= 10;
		a *= -1;
	_putchar(a + '0');
	return (a);
	}
	else
	{
		a %= 10;
		_putchar(a + '0');
		return (a);
	}
}

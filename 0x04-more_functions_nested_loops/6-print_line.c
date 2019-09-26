#include "holberton.h"
/**
 *print_line - this function will print lines
 *@n: is a variable
 *Return: void
 */
void print_line(int n)
{
	int Q;

	if (n > 0)
	{
		for (Q = 0; Q < n; Q++)
		_putchar('_');
	}
	_putchar('\n');
}

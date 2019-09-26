#include "holberton.h"
/**
 *print_line - this function will print lines
 *@n: is a variable
 *Return: void
 */
void print_line(int n)
{
	int Q;

	for (Q = 0; n > Q; Q++)
	{
		if (n != 0)
			_putchar('_');
	}
			_putchar('\n');
}

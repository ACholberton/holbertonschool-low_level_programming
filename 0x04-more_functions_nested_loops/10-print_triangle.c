#include "holberton.h"
/**
 *print_triangle - this function will print a triangle
 *@size: is a variable
 *Return: void
 */
void print_triangle(int size)
{
	int D, S;

	if (size <= 0)
		_putchar('\n');
	for (S = 0; size > S; S++)
	{
		for (D = size - 1; D > S; D--)
		{
			_putchar(' ');
		}
		for (D = 0; D < S; D++)
		{
			_putchar('#');
		}
		_putchar('#');
		_putchar('\n');
	}
}

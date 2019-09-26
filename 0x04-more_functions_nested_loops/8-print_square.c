#include "holberton.h"
/**
 *print_square - This function will print a square
 *@size: is a variable
 *Return: void
 */
void print_square(int size)
{
	int Y, X;

	if (size <= 0)
		_putchar('\n');
	for (Y = 0; size > Y; Y++)
	{
		for (X = 0; size < X; X++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}

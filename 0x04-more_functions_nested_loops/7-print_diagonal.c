#include "holberton.h"
/**
 *print_diagonal - this function will print a diagonal line
 *@n: is a variable
 *Return: void
 */
void print_diagonal(int n)
{
	int D, S;

	if (n <= 0)
	_putchar('\n');
	for (S = 0; n > S; S++)
	{
		for (D = 0; D < S; D++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

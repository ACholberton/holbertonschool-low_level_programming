#include "holberton.h"
/**
 *print_most_numbers - this function will print numebers from 0 to 9
 *but will exclude 2 and 4
 *Return: void
 */
void print_most_numbers(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		if (a != 2 && a != 4)
			_putchar(a + '0');
	}
	_putchar('\n');
}

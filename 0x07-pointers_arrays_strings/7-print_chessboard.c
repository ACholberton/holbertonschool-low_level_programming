#include "holberton.h"
/**
 *print_chessboard - this function will print a chessboard
 *@a: is a string
 *Return: void
 */
void print_chessboard(char (*a)[8])
{
	int count, b;

	for (count = 0; count < 8; count++)
	{
		for (b = 0; b < 8; b++)
		{
			_putchar(a[count][b]);
		}
		_putchar('\n');
	}
}

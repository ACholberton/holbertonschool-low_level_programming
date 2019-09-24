#include "holberton.h"
/**
 *times_table - displays the multiplication table for number 9
 *
 *Return: void
 */
void times_table(void)
{
	int x;
	int y;
	int z;

	for (y = 0; y < 10; y++)
	{
		for (x = 0; x < 10; x++)
		{
			z = x * y;

			if (z < 10 && x !=0)
			{
			_putchar(' ');
			_putchar(' ');
			_putchar(z + '0');
			}
			else if (z >= 10)
			{
				_putchar(' ');
				_putchar((z / 10) + '0');
				_putchar((z % 10) + '0');
	          	}
			else
				_putchar(z + '0');
			if (x != 9)
				_putchar(',');
		}
		_putchar('\n');
	}
}

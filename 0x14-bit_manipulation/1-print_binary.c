#include "holberton.h"
#include <stdlib.h>
/**
 *print_binary - prints the binary representation of a number.
 *@n: is the number to be printed
 *Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int i;
	int flag = 0;


	if (n == 0)
	{
		_putchar('0');
	}
	else
	{
		for (i = 1UL << 63; i > 0; i >>= 1)
		{
			if (n & i)
			{
				_putchar('1');
				flag = 1;
			}
			else if (flag)
			{
				_putchar('0');
			}
		}
	}
}

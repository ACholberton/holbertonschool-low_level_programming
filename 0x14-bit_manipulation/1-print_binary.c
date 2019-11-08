#include "holberton.h"
/**
 *print_binary - prints the binary representation of a number.
 *@n: is the number to be printed
 *Return: void
 */
void print_binary(unsigned long int n)
{
	int i, flag = 0;
	unsigned long int BN;


	if (n == 0)
	{
		_putchar('0');
		return;
	}
	for (i = 31; i >= 0; i--)
	{
		BN = n >> i;

		if (BN & 1)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1)
		{
			_putchar('0');
		}
	}
}

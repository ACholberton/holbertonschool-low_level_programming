#include <stdio.h>
#include "holberton.h"
#include <stdlib.h>
/**
 *pow - will elevate a number to the power of n
 *@base: is the number to be elevated
 *@n: is the amount of times the multiplication is gonna happen
 *Return: the final product
 */
int _pow(unsigned int base, unsigned int n)
{
	unsigned int i, p = 1;

	if (n == 0)
	{
		return (1);
	}

	for (i = 0; i < n; i++)
	{
		p = p * base;
	}
	return (p);
}
/**
 *binary_to_unit - function that converts a binary number to an unsigned int
 *@b: is the number to be converted
 *Return: the converted number, or 0 if there is one or more chars in the string
 * b that is not 0 and 1.
 *b is null
 */
unsigned int binary_to_uint(const char *b)
  {
	unsigned int count;
	unsigned int i = 0;
	unsigned int decimal = 0;

	if (b == NULL)
	{
		return (0);
	}

	while (b[i] != '\0')
	{
		if (b[i] != 48 && b[i] != 49)
		{
			return (0);
		}
		i++;
	}
	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] == '0')
		{
			continue;
		}
		decimal += _pow(2, i - 1 - count);
	}
	return (decimal);
}

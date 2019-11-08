#include "holberton.h"
/**
 *get_bit - will get the bit value of an idex
 *@n: the bit
 *@index: the index the bit is taken from
 *Return: the value of the bit at index index or -1 if an error occured
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask;

	mask = 1;

	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	mask = mask << index;

	if (n & mask)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

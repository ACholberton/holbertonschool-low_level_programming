#include "holberton.h"
/**
 *print_rev - will print a string in reverse
 *@s: is a string
 *Return: string
 */
void print_rev(char *s)
{
	int b;
	char *temp;

	temp = s;

	b = 0;

	while (*temp)
	{
		temp++;
		b++;
	}

	for (b = b -1; b >= 0; b--)
	{
		_putchar(s[b]);
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 *_puts_recursion - added a funciton that will print a string
 *@s: is a string
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	if (*s == '\0')
	{
		_putchar('\n');
	}
}

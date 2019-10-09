#include "holberton.h"
/**
 *_puts_recursion - added a funciton that will print a string
 *@s: is a string
 *Return: void
 */
void _puts_recursion(char *s)
{
	int a;

	for (a = 0; s[a] != '\0'; a++)
	{
		_putchar(s[a]);
	}
	_putchar('\n');
}

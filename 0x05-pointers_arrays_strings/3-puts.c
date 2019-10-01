#include "holberton.h"
/**
 *_puts - this function will return a string
 *@str: is a string
 *Return: string
 */
void _puts(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
	_putchar(str[a]);
	}
	_putchar('\n');
}

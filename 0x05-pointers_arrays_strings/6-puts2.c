#include "holberton.h"
/**
 * puts2 - this function will print every other character of a string
 *@str: is a string
 *Return: string
 */
void puts2(char *str)
{
	int a;
	char *temp;

	temp = str;
	a = 0;

	while (*temp)
	{
		temp++;
		a++;
	}

	for (a = 0; str[a] != '\0'; a++)
	{
		if (a % 2 == 0)
		_putchar(str[a]);
	}
	_putchar('\n');
}

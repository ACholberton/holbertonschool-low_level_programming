  #include "holberton.h"
/**
 * puts_half - this function will print half of a string
 *@str: is a string
 *Return: string
 */
void puts_half(char *str)
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

	for (a = (a + 1) / 2; str[a] != '\0'; a++)
	{
		if ((a + 1) / 2)
			_putchar(str[a]);
	}
	_putchar('\n');
}

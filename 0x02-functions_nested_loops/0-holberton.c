#include "holberton.h"
/**
 *main - entry point
 *
 *Return: in this case will be 0
 */
int main(void)
{
	char ch[9] = "Holberton";
	int a;

	for (a = 0; a < 9; a++)
		_putchar(ch[a]);

	_putchar('\n');
	return (0);
}

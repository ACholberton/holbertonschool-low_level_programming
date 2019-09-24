#include "holberton.h"
void print_alphabet_x10(void)
{
	int a;
	char letter;

	for (a = 48; a < 58; a++)
		{
		for (letter = 97; letter < 123; letter++)
			_putchar(letter);
		_putchar('\n');
		}
}

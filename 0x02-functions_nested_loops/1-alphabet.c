#include "holberton.h"
void print_alphabet(void)
{
	char letter = 97;
	char NL = 10;

	while (letter < 123)
	{
	_putchar(letter);
	letter++;
	}
	_putchar(NL);

}

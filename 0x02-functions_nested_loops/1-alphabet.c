#include "holberton.h"
/**
 *print_alphabet - this function will print the alphabet
 *Return: void
 */
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

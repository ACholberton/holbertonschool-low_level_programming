#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (sucess)
 */

int main(void)
{
	char letter = 122;
	char NL = 10;

	while (letter > 96)
	{
		putchar(letter);
	letter--;
	}
	putchar(NL);
	return (0);
}

#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
	char letter = 97;
	char CAPS = 65;
	char NL = 10;
	while (letter < 123)
	{
		putchar(letter);
	letter++;
	}
	while (CAPS < 91)
	{
		putchar(CAPS);
	CAPS++;
	}
	putchar(NL);
	return (0);
}

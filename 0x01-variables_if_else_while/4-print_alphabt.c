#include <stdio.h>
/**
 *main - Entry Point
 *
 *Return: Always 0 (success)
 */

int main(void)
{
char letter = 97;
char NL = 10;

while (letter < 123)
{
if (letter != 'e' && letter != 'q')
	putchar(letter);
	letter++;
}
putchar(NL);
return (0);
}

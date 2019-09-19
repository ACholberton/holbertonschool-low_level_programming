#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0 (sucess)
 */
int main(void)
{
	char NUM = 48;
	char Letter = 97;
	char NL = 10;

	while (NUM < 58)
	{
		putchar(NUM);
		NUM++;
	}
	while (Letter < 103)
	{
	putchar(Letter);
	Letter++;
	}
	putchar(NL);
	return (0);
}

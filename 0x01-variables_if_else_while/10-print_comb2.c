#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: always 0 (sucess)
 */
int main(void)
{
	int a = 0;

	while (a != 100)
	{
		putchar((a / 10) + '0');
		putchar((a % 10) + '0');
	if (a != 99)
	{
		putchar(',');
		putchar(' ');
	}
	a++;
	}
	putchar('\n');
	return (0);
}

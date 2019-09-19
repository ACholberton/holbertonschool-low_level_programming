#include <stdio.h>
/**
 *main - Entry point
 *
 *Return: Always 0 (sucess)
 */
int main(void)
{
char letter = 'a';
char NL = 10;
while (letter < 123)
{
putchar(letter);
letter++;
}
putchar(NL);
return (0);
}

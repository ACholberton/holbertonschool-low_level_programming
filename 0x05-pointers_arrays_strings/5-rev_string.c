#include "holberton.h"
/**
 *rev_string - this function will reverse a string
 *@s: is a string
 *Return: reverse string
 */
void rev_string(char *s)
{
	int a, b;
	char temp;

	b = 0;

	for (a = 0; s[a] != '\0'; a++)
		b++;
	for (a = 0; a < b; a++, b--)
	{
		temp = s[a];
		s[a] = s[b - 1];
		s[b - 1] = temp;
	}
}

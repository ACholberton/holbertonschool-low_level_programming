#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - this function will print out all natural numbers from n to 98"
 *@n: is a variable
 *Return: void
 */
void print_to_98(int n)
{
	if (n == 98)
		printf("%i", n);
	else if (n < 98)
	{
		for (; n < 99; n++)
		{
			if (n != 98)
			printf("%i, ", n);
			else
				printf("%i", n);
		}
}
	else
	{
		for (; n > 97; n--)
		{
			if (n != 98)
			printf("%i, ", n);
			else
				printf("%i", n);
		}
	}
	printf("\n");
}

#include "holberton.h"
#include <stdio.h>
/**
 *main - This program will replace multiples of 3 and 5
 *Return: always 0 (sucess)
 */
int main(void)
{
	int a;

	for (a = 1; a < 101; a++)
	{
		if (a % 3 == 0 && a % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (a % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (a == 100)
		{
			printf("Buzz");
		}
		else if (a % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", a);
		}
	}
	printf("\n");
	return (0);
}

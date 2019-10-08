#include "holberton.h"
#include <stdio.h>
/**
 *print_diagsums - prints the sum of two diagonal square matrix of integers
 *@a: is a string
 *@size: is a integer
 *Return: always 0
 */
void print_diagsums(int *a, int size)
{
	int countA, countB;
	int sum1, sum2;

	sum1 = 0;
	sum2 = 0;

	for (countA = 0; countA < size; countA++)
	{
		sum1 = sum1 + a[countA * (size + 1)];
	}
	for (countB = 1; countB <= size; countB++)
	{
		sum2 = sum2 + a[countB * (size - 1)];
	}
	printf("%i, %i\n", sum1, sum2);
}

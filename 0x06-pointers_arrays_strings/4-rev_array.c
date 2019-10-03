#include "holberton.h"
/**
 *reverse_array - this function reverses an array
 *@a: is an array
 *@n: is a variable
 *Return: void
 */
void reverse_array(int *a, int n)
{
	int b, tmp;

	n--;

	for (b = 0; b < n; b++, n--)
	{
		tmp = a[b];
		a[b] = a[n];
		a[n] = tmp;
	}
}

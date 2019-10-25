#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *sum_them_all - is a function that will return the sum of all arguments
 *@n: is an unsigned integer
 *Return: pointer to the sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int b;
	int total = 0;
	va_list a;

	if (n == 0)
	{
		return (0);
	}
	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		total += va_arg(a, int);
	}
	va_end(a);
	return (total);
}

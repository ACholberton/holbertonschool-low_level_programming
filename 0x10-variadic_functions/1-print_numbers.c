#include <stdarg.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 *print_numbers - is a function that will print numbers
 *@separator: is the string to be printed between the numbers
 *@n: numbers of integers passed
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	va_list a;

	if (separator == NULL)
	{
		return;
	}

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		printf("%d", va_arg(a, int));
		if (b != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}

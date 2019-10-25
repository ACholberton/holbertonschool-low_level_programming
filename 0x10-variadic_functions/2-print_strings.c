#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_string - function will print a string
 *@separator: is the string to be printed
 *@n: is the number of strings passed into the function
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	va_list a;

	if (separator == NULL || n == 0)
	{
		return;
	}

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		printf("%s", va_arg(a, char *));
		if (b != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}

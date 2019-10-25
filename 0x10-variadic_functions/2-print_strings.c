#include "variadic_functions.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 *print_strings - function will print a string
 *@separator: is the string to be printed
 *@n: is the number of strings passed into the function
 *Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int b;
	va_list a;
	char *pointer;

	if (separator == NULL || n == 0)
	{
		return;
	}

	va_start(a, n);

	for (b = 0; b < n; b++)
	{
		pointer = va_arg(a, char *);
		if (pointer == NULL)
		{
			printf("(nil");
		}
		else
		{
			printf("%s", pointer);
		}
		if (b != n - 1)
		{
			printf("%s", separator);
		}
	}
	va_end(a);
	printf("\n");
}

#include "variadic_functions.h"
#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>
/**
 *print_all - will print anything
 *@format: is the format  of whats going to be printed
 *Return: void
 */
void print_all(const char * const format, ...)
{
	int a = 0, b = 0;
	va_list holder;

	va_start(holder, format);

	while (format[b] != '\0')
		b++;
	while (format[a])
	{
		switch (format[a])
		{
		case 'c':
			printf("%c", (char)va_arg(holder, int));
			break;
		case 'i':
			printf("%i", va_arg(holder, int));
			break;
		case 'f':
			printf("%f", (float)va_arg(holder, double));
			break;
		case 's':
			if (format == NULL)
			{
				printf("(nil)");
				break;
			}
				printf("%s", va_arg(holder, char *));
				break;
		}
		if ((a != b - 1) && (format[a] == 'c' ||
					     format[a] == 'i' ||
					     format[a] == 'f' ||
					     format[a] == 's'))
		{
			printf(", ");
		}
		a++;
	}
	printf("\n");
	va_end(holder);
}

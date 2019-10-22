#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - Function that prints a dog with its name, age, and owner
 * @d: is a struct
 * Return: NULL
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
		printf("\n");

	printf("Name: ");
	if (d->name == NULL)
	{
		d->name = "(nil)";
		printf("%p\n", d->name);
	}
	else
		printf("%s\n", d->name);

	printf("Age: ");
	if (d->name == '\0')
	{
		d->name = "(nil)";
		printf("%p\n", d->name);
	}
	else
		printf("%f\n", d->age);

	printf("Owner: ");
	if (d->owner == NULL)
	{
		d->owner = "(nil)";
		printf("%p\n", d->owner);
	}
	else
		printf("%s\n", d->owner);
}

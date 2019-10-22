#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *init_dog - a function that initialize a variable of type struct dog
 *@d: is the struct initialization
 *@name: is the name of the dog
 *@age: is the age of the dog
 *@owner: is the owner if the dog
 *Return: NULL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

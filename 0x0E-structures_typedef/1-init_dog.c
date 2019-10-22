#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * init_dog - Program that initializes certain variables
 * @d: is the Struct for initializaiton
 * @name: is the name char array
 * @age: is the age float value
 * @owner: Is the owner name char array
 * Return: NULL
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

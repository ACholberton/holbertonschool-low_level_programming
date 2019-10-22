#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *free_dog - will free the dogs
 *@d: is my argument
 *Return: void
 */
void free_dog(dog_t *d)
{
	if (d == NULL)
	{
		return (NULL);
	}
	free(d->name);
	free(d->owner);
	free(d);
}

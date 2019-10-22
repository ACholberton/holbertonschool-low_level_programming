#include <stdlib.h>
#include "dog.h"
#include <stdio.h>
#include "holberton.h"
/**
 *_strlen - this function returns the lenght of  string
 *@s: is a string
 *Return: lenght
 */
int _strlen(char *s)
{
	int l;

	l = 0;

	while (*s)
	{
		s++;
		l++;
	}
	return (l);
}
/**
 **_strcpy - will copy a string to a buffer;
 *@dest: is a buffer
 *@src: is a string
 *Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a, c;

	a = 0;

	while (src[a] != '\0')
	{
		a++;
	}
	for (c = 0; c <= a; c++)
	{
		dest[c] = src[c];
	}
	return (dest);
}
/**
 *dog_t *new_dog - will make a new dog
 *@name: is the name of the new dog
 *@age: is the age of the new dog
 *@owner: is the owner of the new dog
 *Return: a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;
	char *name2, *owner2;
	int name2len, owner2len = 0;

	if (name == NULL || owner == NULL)
		return (NULL);

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);

	name2len = _strlen(name);
	name2 = malloc(sizeof(char) * (name2len + 1));
	if (name2 == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	owner2len = _strlen(owner);
	owner2 = malloc(sizeof(char) * (owner2len + 1));
	if (owner2 == NULL)
	{
		free(name2);
		free(new_dog);
		return (NULL);
	}

	new_dog->name = _strcpy(name2, name);
	new_dog->age = age;
	new_dog->owner = _strcpy(owner2, owner);

	return (new_dog);
}

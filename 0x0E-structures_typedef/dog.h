#ifndef DOG_H
#define DOG_H

/**
 * struct dog - A simple struct that contains variables
 * @name: is the name of dog in char array
 * @age: is the number + decimals
 * @owner: is the name of owner in char array
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif

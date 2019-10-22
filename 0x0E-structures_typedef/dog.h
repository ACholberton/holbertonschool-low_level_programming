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
/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

int _putchar(char c);

#endif

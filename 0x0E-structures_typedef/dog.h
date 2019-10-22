#ifndef DOG_H
#define DOG_H
/**
 *struct dog - a structure
 *@name:  is the name of the dog
 *@age: is the age of the dog
 *@owner: is the owner of the dog
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
#endif

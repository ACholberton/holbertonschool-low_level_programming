#include "holberton.h"
/**
 *set_string - function will set the value of a pointer to a char
 *@s: is a pointer
 *@to: is a char
 *Return: void
 */
void set_string(char **s, char *to)
{
	*s = to;
}

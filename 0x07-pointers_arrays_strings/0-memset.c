#include "holberton.h"
/**
 *_memset - funcrion will fill memory with constant files
 *@s: is a a pointer
 *@b: is a variable
 *@n: is an unasigned integer
 *Return: pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
     unsigned int a;

     	for (a = 0; a < n; a++)
		{
			s[a] = b;
		}
	return (s);
}

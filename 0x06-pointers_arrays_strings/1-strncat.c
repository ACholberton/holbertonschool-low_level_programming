#include "holberton.h"
/**
 *_strncat - will concatenate two strings
 *@dest: is a string
 *@src: is a string
 *@n: is a variable
 *Return: pointer to string
 */
char *_strncat(char *dest, char *src, int n)
{
	int codeC, lengthD;

	for (lengthD = 0; dest[lengthD] != '\0'; lengthD++)
		;
	for (codeC = 0; codeC < n; codeC++)
	{
		dest[lengthD] = src[codeC];
		lengthD++;
	}
	return (dest);
}

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
	int lengthS, codeC, lengthD;

	for (lengthS = 0; src[lengthS] != '\0'; lengthS++)
		;
	for (lengthD = 0; dest[lengthD] != '\0'; lengthD++)
		;
	for (codeC = 0; codeC < lengthD; codeC++)
	{
		if (dest[lengthD] >= n && src[lengthS] <= n)
		{
			n = lengthD + lengthS;
		}
		else if (dest[lengthD] <= n && src[lengthS] >= n)
		{
			n = lengthD + lengthS;
		}
		else
		dest[codeC + lengthD] = src[codeC];
	}
	return (dest);
}

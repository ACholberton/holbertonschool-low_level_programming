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
	int srcA, codeC, destG;

	for (srcA = 0; src[srcA] != '\0'; srcA++)
		;
	for (destG = 0; dest[destG] != '\0'; destG++)
		;
	for (codeC = 0; codeC < destG; codeC++)
	{
		if (dest[destG] > n && src[srcA] < n)
		{
			n = destG + srcA;
		}
		else
		dest[codeC + destG] = src[codeC];
	}
	return (dest);
}

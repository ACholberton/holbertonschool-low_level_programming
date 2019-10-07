#include "holberton.h"
/**
 *_strspn - function will get the length of a prefix substring
 *@s: is a string
 *@accept: is the number of bytes
 *Return:  number of bytes
*/
unsigned int _strspn(char *s, char *accept)
{
	int l, a, count;

	count = 0;

	for (l = 0; s[l] != '\0'; l++)
	{
		if (count != l)
			break;
		for (a = 0; accept[a] != '\0'; a++)
		{
			if (s[l] == accept[a])
				count++;
		}
	}
	return (count);
}

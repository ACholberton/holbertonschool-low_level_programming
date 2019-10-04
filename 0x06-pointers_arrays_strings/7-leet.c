#include "holberton.h"
/**
 *leet - encode the string into 1337
 *@rep: is a string
 *Return: string
 */
char *leet(char *rep)
{
	int a, b;
	char replace[5][3] = {{'a', 'A', '4'},
			      {'e', 'E', '3'},
			      {'o', 'O', '0'},
			      {'t', 'T', '7'},
			      {'l', 'L', '1'}};

	for (a = 0; *(rep + a) != '\0';)
	{
		for (b = 0; b < 5; b++)
		{
			if (*(rep + a) == replace[b][0]
			    || *(rep + a) == replace[b][1])
			{
				*(rep + a) = replace[b][2];
				break;
			}
		}
		a++;
	}
	return (rep);
}

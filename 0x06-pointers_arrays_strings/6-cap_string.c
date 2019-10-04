#include "holberton.h"
/**
 *cap_string - this function will capitalize all words of a string
 *@UPPER: is a string
 *Return: String
 */
char *cap_string(char *UPPER)
{
	int a, b;
char separators[] = {',', ';', '.', '!', '?', '\"', '(', ')',
		     '{', '}', ' ', '\t', '\n'};

		for (a = 0; UPPER[a] != '\0'; a++)
		{
			for (b = 0; separators[b] != '\0'; b++)
			{
				if (separators[b] == UPPER[a])
				{
					if (UPPER[a + 1] >= 97 && UPPER[a + 1] <= 123)
					{
						UPPER[a + 1] = UPPER[a + 1] - 32;
					}
				}
			}
		}
		return (UPPER);
}

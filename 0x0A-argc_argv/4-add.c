#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main -entry point
 *@argc:  is an integer
 *@argv: is an array of characters
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int i = 0, a = 0, Result = 0;
	char *number = argv[i];

	if (argc < 1)
	{
		printf("0\n");
	}
	for (; i < argc; i++)
	{
		for (; number[a] >= '0' && number[a] <= '9'; a++)
		{
			printf("Error\n");
			return (0);
		}
		Result += atoi(argv[i]);
	}
	printf("%d\n", Result);
	return (0);
}

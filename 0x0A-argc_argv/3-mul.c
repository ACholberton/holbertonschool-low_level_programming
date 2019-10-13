#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main -entry point
 *@argc:  is an integer
 *@argv: is an array of characters
 *Return: 0
 */
int main(int argc, char **argv)
{
	int A1, B1, Result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		A1 = atoi(argv[1]);
		B1 = atoi(argv[2]);
		Result = A1 * B1;
		printf("%d\n", Result);
		return (0);
	}
}

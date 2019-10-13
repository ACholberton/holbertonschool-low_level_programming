#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *main -entry point
 *@argc:  is an integer
 *@argv: is an array of characters
 *Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int A1, B1, Result;

	A1 = atoi(argv[1]);
	B1 = atoi(argv[2]);

	if (*argv)
	{
		Result = A1 * B1;
		printf("%d\n", Result);
	}
	else
		printf("Error");
	return (0);
}

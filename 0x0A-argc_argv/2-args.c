#include <stdio.h>
#include "holberton.h"
/**
 *main - entry point
 *@argc:  is an integer
 *@argv: is an array for argc
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}

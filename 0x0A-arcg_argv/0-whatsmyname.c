#include <stdio.h>
#include "holberton.h"
/**
 *main -  entry points
 *@argc: is a integer
 *@argv: is an array
 *Return: 0
 */
int main(int argc, char *argv[])
{
	int a;

	for (a = 0; a < argc; a++)
		printf("%s\n", argv[a]);
	return (0);
}

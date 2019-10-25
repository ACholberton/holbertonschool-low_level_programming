#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
/**
 *main - entry point
 *@argc: is an integer
 *@argv: is an array of characters
 *Return:
 */
int main(int argc, char *argv[])
{
	int total, a, b;
	int (*point)(int, int);

	if (argc < 4 || argv[1] == NULL || argv[3] == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);

	point = get_op_func(argv[2]);

	if (point == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}

	total = point(a, b);

	printf("%d\n", total);

	return (0);
}

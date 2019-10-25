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
	int (*point)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	point = get_op_func(argv[2]);
	if (point == NULL)
	{
		printf("Error\n");
		exit(99);
	}
	if ((atoi(argv[3]) == 0) && (*argv[2] == '%' || *argv[2] == '/'))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", point(atoi(argv[1]), atoi(argv[3])));
	return (0);
}

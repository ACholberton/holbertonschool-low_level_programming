#include "monty.h"
/**
 *swap - swaps the top two elements of the stack.
 *@a:first element
 *@b: second element
 *Return: nothing
 */

void swap(int *a, int *b)
{
	int tmp;
	tmp = *a;
	*a = *b;
	*b = tmp;
}

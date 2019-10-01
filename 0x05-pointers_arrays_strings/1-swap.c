 #include "holberton.h"
/**
 *swap_int - this function swaps the value of integers
 *@a: is a variable
 *@b: is a variable
 *return: void
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;

}

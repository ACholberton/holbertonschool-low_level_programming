#include "holberton.h"
/**
 *is_prime_helper - is a helper function
 *@i: is a variable
 *@n: is a variable
 *Return: helper
 */
int is_prime_helper(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, i - 1));
}
#include "holberton.h"
/**
 *is_prime_number - will print 1 or 0 if it is a prime number
 *@n: is a variable
 *Return: 1
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	return (is_prime_helper(n, n / 2));
}

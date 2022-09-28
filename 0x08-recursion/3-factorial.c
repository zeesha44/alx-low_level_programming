#include "main.h"
/**
 * factorial - returns the factorial of a given number
 * @n: number to be used
 *
 * Return: the factorial of thee number
 */
int factorial(int n)
{
	int n_fact;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	n_fact = factorial(n - 1);
	return (n * n_fact);
}

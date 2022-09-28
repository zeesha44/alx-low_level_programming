#include "main.h"
/**
 * is_prime_number - returns the 1 if n is prime
 * @n: number to be checked
 *
 * Return: 1 if n is prime, 0 otherwise
 */
int is_prime_number(int n)
{
	int p = n / 2;

	if (n <= 1)
	{
		return (0);
	}
	return (is_prime(n, p));
}
/**
 * is_prime - returns the 1 if n is prime
 * @n: number to be checked
 * @p: number to start from
 *
 * Return: 1 if n is prime, otherwise 0
 */
int is_prime(int n, int p)
{
	if (p <= 1)
	{
		return (1);
	}
	else if (n % p == 0)
	{
		return (0);
	}
	return (is_prime(n, p - 1));
}

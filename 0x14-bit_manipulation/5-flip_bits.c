#include "main.h"

/**
 * flip_bits - returns no. of bits you need to flipto get
 * from one number to another
 * @n:first number
 * @m: second number
 *
 * Return: no. of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int nbits;

	for (nbits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			nbits++;
	}
	return (nbits);
}

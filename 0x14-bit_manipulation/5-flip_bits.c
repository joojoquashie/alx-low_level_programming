#include "main.h"

/**
 * flip_bits - returns the number of bits to flip from one number to another
 * @n: number one
 * @m: number two
 *
 * Return: number of bits needed
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int number_bits;

	for (number_bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			number_bits++;
	}
	return (number_bits);
}

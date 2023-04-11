#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer of an unsigned long int
 * @index: index of the bit
 *
 * Return: 1 if it worked, -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int uli;

	if (index >= (sizeof(*n) * 8))
		return (-1);

	uli = 1 << index;
	*n = (*n | uli);

	return (1);
}

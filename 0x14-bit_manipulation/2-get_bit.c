#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: unsigned long int input
 * @index: unsigned int index of the bit
 *
 * Return: value of the bit at index, -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int ui;

	if (n == 0 && index < 64)
		return (0);

	for (ui = 0; ui <= 63; n >>= 1, ui++)
	{
		if (index == ui)
			return (n & 1);
	}
	return (-1);
}

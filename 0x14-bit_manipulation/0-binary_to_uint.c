#include "main.h"

/**
 * binary_to_uint - converts a binary number to an uint.
 * @b: binary.
 *
 * Return: unsigned int.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int uint;
	int length, i;

	if (!b)
		return (0);

	uint = 0;

	for (length = 0; b[length] != '\0'; length++)
		;

	for (length--, i = 1; length >= 0; length--, i *= 2)
	{
		if (b[length] != '0' && b[length] != '1')
		{
			return (0);
		}

		if (b[length] & 1)
		{
			uint += i;
		}
	}

	return (uint);
}

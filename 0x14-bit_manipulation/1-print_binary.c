#include "main.h"

/**
 * print_binary - prints the binary representation of a no.
 * @n: unsigned long int.
 *
 * Return: nothing
 */

void print_binary(unsigned long int n)
{
	int in, i;
	unsigned long int li;

	in = 0;
	for (i = 63; i >= 0; i--)
	{
		li = (n >> i) & 1;
		if (li == 1)
			in = 1;
		if (in == 1)
			_putchar(((n >> i) & 1) + '0');
	}
	if (n == 0)
		_putchar('0');
}

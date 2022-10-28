#include "main.h"

/**
 * flip_bits - gets the number of bits you would need to flip
 * to get from one number to another.
 * @n: the binary number
 * @m: the number to flip n to
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int exclusive_or = n ^ m, bits = 0;

	while (exclusive_or > 0)
	{
		bits += (exclusive_or & 1);
		exclusive_or >>= 1;
	}

	return (bits);
}

#include "main.h"

int _pow(int x, int y);

/**
 * _pow - returns the exponent of a number
 * @x: the base
 * @y: the exponent
 *
 * Return: x to the power of y
 */
int _pow(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else
		return (x * _pow(x, y - 1));
}

/**
 * binary_to_uint - converts a binary number to an unsigned in
 * @b: pointer to the string containing the binary number
 *
 * Return: an unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, exp = 0;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		res += (b[len] - '0') * _pow(2, exp);
		exp++;
	}

	return (res);
}

#include "main.h"

/**
 * can_divide - checks if a number and divide another
 * @n: the number to be divided
 * @d: the divisor
 *
 * Return: 1 or 0
 */
int can_divide(int n, int d)
{
	if (n % d == 0)
		return (0);
	if (d == n / 2)
		return (1);

	return (can_divide(n, d + 1));
}

/**
 * is_prime_number - checks if number is prime
 * @n: the number
 *
 * Return: 1 if the input integer is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int d = 2;

	if (n <= 1)
		return (0);

	if (n == 2 || n == 3)
		return (1);

	return (can_divide(n, d));
}

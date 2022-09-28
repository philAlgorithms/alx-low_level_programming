#include "main.h"

/**
 * factorial - returns the factorial of a given number.
 * @n: the number
 *
 * Return: If n is negative - -1
 * If n is greater than 0 - factorial of the number
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}

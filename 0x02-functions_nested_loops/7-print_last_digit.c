#include "main.h"

/**
 * print_last_digit -returns the last digit as output
 * @n: takes an integer argument
 * Return: returns last digit
 */
int print_last_digit(int n)
{
	if (n == -2147483648)
	{
		_putchar(8 + '0');
		return (8);
	}
	else if (n < 0)
	{
		n = -n;
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
}

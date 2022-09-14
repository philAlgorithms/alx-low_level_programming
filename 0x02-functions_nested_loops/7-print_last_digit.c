#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: The number
 *
 * Return: the last digit of the number
 */
int print_last_digit(int n)
{
	int r = n % 10;

	_putchar(last_digit + '0');	
	return (r);
}

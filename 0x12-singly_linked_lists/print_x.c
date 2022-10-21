#include "main.h"
/**
 * print_number - prints an integer
 * @n: The integer
 */
void print_number(int n)
{
	unsigned int number = n;

	if (n < 0)
	{
		_putchar('-');
		number = -1 * number;
	}
	if ((number / 10) > 0)
		print_number(number / 10);
	_putchar((number % 10) + '0');
}

/**
 * print_string - prints a string
 * @s: The pointer to string
 */
void print_string(char *s)
{
	int length = 0, index = 0;

	while (s[index++])
		length++;

	for (index = 0; index < length; index++)
		_putchar(s[index]);
}



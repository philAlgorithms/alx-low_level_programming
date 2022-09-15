#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The length of the line
 */
void print_diagonal(int n)
{
	int i, k;
	int j = 0;

	for (i = 0; i < n; i++)
	{
		for (k = 0; k < j; k++)
			_putchar(' ');
		_putchar('\\');
		_putchar('\n');
		j++;
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet_x10 - prints latin lowercase letters x10
 */
void print_alphabet_x10(void)
{
	char letter = 'a';
	int i = 0;

	while (i < 10)
	{
		for (; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');

		letter = 'a';
		i++;
	}
}

#include "main.h"

/**
 * main - prints charachters using _putchar function
 *
 * Return: returns 0 on success
 *
 */

int main(void)
{
	char *letters = "_putchar\n";

	while (*letters)
		_putchar(*letters++);

	return (0);
}

#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - prints a list of numbers each followed by a separator
 * @separator: a character to be printed after each number
 * @n: number of numbers to be printed
 * @...: the list of numbers to be printed
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(nums, int));
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("%c", '\n');
	va_end(nums);
}

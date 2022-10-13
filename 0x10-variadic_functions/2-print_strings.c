#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_strings - prints a list of strings each followed by a separator
 * @separator: a character to be printed after each string
 * @n: number of strings to be printed
 * @...: the list of strings to be printed
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int i;

	va_start(strings, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(strings, char *);
		str == NULL ? printf("(nil)") : printf("%s", str);
		if (separator != NULL && i < n - 1)
			printf("%s", separator);
	}
	printf("%c", '\n');
	va_end(strings);
}

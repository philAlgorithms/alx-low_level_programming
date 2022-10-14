#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * _strlen - returns the length of a string.
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen(const char * const s)
{
	int res = 0;

	if (*s)
		return (res + 1 + _strlen(s + 1));
	return (0);
}

/**
 * print_str - prints string
 * @str - the string
 *
 * Returns: Always 0
 */
int print_str(char *str)
{
	printf("%s", str);
	return (0);
}

/**
 * print_all - prints anything
 * @format: the type format of a respective parameter
 */
void print_all(const char * const format, ...)
{
	const int length = _strlen(format);
	va_list objects;
	int format_index = 0;
	char *str;

	va_start(objects, format);
	while (format_index < length)
	{
		switch (format[format_index])
		{
			case 'f':
				printf("%f", va_arg(objects, double));
				print_comma(format_index, length);
				break;
			case 'c':
				printf("%c", va_arg(objects, int));
				print_comma(format_index, length);
				break;
			case 'i':
				printf("%d", va_arg(objects, int));
				print_comma(format_index, length);
				break;
			case 's':
				str = va_arg(objects, char *);

				str == NULL ? printf("(nil)") : printf("%s", str);
				print_comma(format_index, length);
				break;
		}
		format_index++;
	}
	printf("%c", '\n');
}

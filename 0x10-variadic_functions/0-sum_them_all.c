#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums up a given amount of integer arguments
 * @n: number of arguments
 * @...: A variable number of paramters to be sumed up
 *
 * Return: sum of arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	unsigned int i, sum = 0;

	va_start(num, n);

	for (i = 0; i < n; i++)
		sum += va_arg(num, int);

	va_end(num);
	return (sum);
}

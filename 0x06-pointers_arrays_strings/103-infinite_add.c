#include "main.h"

/**
 * sum_strings - adds two number in a string
 * @number1: first string with number
 * @number2: second string with number
 * @r: buffer to the result
 * @r_i: index of the result
 *
 * Return: A pointer to a string
 */
char *sum_strings(char *number1, char *n2, char *r, int r_i)
{
	int number, tens = 0;

	for (; *number1 && *n2; number1--, n2--, r_i--)
	{
		number = (*number1 - '0') + (*n2 - '0');
		number += tens;
		*(r + r_i) = (number % 10) + '0';
		tens = number / 10;
	}

	for (; *number1; number1--, r_i--)
	{
		number = (*number1 - '0') + tens;
		*(r + r_i) = (number % 10) + '0';
		tens = number / 10;
	}

	for (; *n2; n2--, r_i--)
	{
		number = (*n2 - '0') + tens;
		*(r + r_i) = (number % 10) + '0';
		tens = number / 10;
	}

	if (tens && r_i >= 0)
	{
		*(r + r_i) = (tens % 10) + '0';
		return (r + r_i);
	}

	else if (tens && r_i < 0)
		return (0);

	return (r + r_i + 1);
}

/**
 * infinite_add - Adds two numbers
 * @n1: First number
 * @n2: second number
 * @r: buffer to answer
 * @size_r: size of buffer
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, n1_len = 0, n2_len = 0;

	for (i = 0; *(n1 + i); i++)
		n1_len++;

	for (i = 0; *(n2 + i); i++)
		n2_len++;

	if (size_r <= n1_len + 1 || size_r <= n2_len + 1)
		return (0);

	n1 += n1_len - 1;
	n2 += n2_len - 1;
	*(r + size_r) = '\0';

	return (add_strings(n1, n2, r, --size_r));
}

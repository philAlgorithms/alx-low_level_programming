#include "lists.h"

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

/**
 * print_list - prints the content of a singly linked list
 * @h: pointer to the list of type list_t
 *
 * Return: number of list structs printed
 */
size_t print_list(const list_t *h)
{
	size_t length = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
		{
			_putchar('[');
			print_number(h->len);
			_putchar(']');
			print_string(h->str);
			_putchar('\n');
		}

		length++;
		h = h->next;

	}
	return (length);
}

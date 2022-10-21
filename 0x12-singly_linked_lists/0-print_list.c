#include <stdlib.h>
#include "lists.h"

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
			printf("[%d] %s\n", h->len, h->str);

		length++;
		h = h->next;

	}
	return (length);
}

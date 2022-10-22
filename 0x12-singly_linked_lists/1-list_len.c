#include <stdlib.h>
#include "lists.h"

/**
 * list_len - gets the length of a singly linked list
 * @h: the list struct
 *
 * Return: length of the list
 */
size_t list_len(const list_t *h)
{
	size_t length = 0;

	for (; h != NULL; h = h->next)
		length++;
	return (length);
}

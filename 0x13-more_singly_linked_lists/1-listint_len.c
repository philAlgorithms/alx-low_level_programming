#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - gets the length of a linked list
 * @h: pointer to the first element of the list
 * Return: length of list
 */
size_t listint_len(const listint_t *h)
{
	size_t length = 0;

	for (; h != NULL; h = h->next)
		length++;

	return length;
}

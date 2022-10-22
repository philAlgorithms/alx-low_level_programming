#include <string.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list.
 * @head: begining of the linked list
 * @str: strkng to add to the new lknked list
 *
 * Return: the address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *n;

	n = malloc(sizeof(list_t));

	if (n == NULL)
		return (NULL);
	n->str = strdup(str);
	n->len = strlen(str);
	n->next = *head;
	*head = n;
	return (n);
}

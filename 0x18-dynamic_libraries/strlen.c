#include <stddef.h>
#include "main.h"

/**
 * _strlen - returns the length of a stringi
 * @s: The pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	size_t len = 0;

	while (*s++)
		len++;
	return (len);
}

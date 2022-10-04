#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array of characters
 * @c: the character to intialize each element of the array
 *
 * Return: NULL if size is zero or
 * a pointer to an array of characters;
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(char) * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		arr[i] = c;

	return (arr);
}

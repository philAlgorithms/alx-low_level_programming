#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of elements in array
 * @size: size of each member of the array
 *
 * Return: a pointer to the memory allocated
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *mem_val;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	mem = malloc(nmemb * size);

	if (mem == NULL)
		return (NULL);
	mem_val = mem;

	for (i = 0; i < (nmemb * size); i++)
		mem_val[i] = '\0';

	return (mem);
}

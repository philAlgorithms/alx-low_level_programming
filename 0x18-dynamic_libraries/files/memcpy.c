#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: pointer to destination
 * @src: pointer to source
 * @n: number of bytes to copy
 *
 * Return: a pointer to the destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	char *destination = dest;
	const char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}

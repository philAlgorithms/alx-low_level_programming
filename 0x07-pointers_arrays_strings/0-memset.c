#include "main.h"

/**
 * _memset - fills the first n bytes of the memory area
 * pointed to by s with the constant byte b
 * @s: the pointer to the memory
 * @b: the byte to fill in the memory
 * @n: number of bytes to be filled
 *
 * Return: a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *mem = s, val = b;

	for (i = 0; i < n; i++)
		mem[i] = val;

	return (mem);
}

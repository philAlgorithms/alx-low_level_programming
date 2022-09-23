#include "main.h"

/**
 * _strncpy - copies string from src to dest
 *
 * @dest: the string to be mutuated
 * @src: the str that is appended to dest
 * @n: number of bytes
 *
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j = 0, src_len = 0;

	while (src[i++])
		src_len++;

	while (src[j] && j < n)
	{
		dest[dest_len++] = src[j];
		j++;
	}

	for(j = src_len; j < n; j++)
		dest[j] = '\0';

	return (dest);
}

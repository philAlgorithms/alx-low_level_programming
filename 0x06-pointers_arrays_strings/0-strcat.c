#include "main.h"

/**
 * _strcat - appends the src string to the dest string,
 * overwriting the terminating null byte (\0)at the end of dest,
 * and then adds a terminating null byte
 *
 * @dest: the string to be mutuated
 * @src: the str that is appended to dest
 *
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	while (src[j])
	{
		dest[dest_len++] = src[j];
		j++;
	}

	return (dest);
}

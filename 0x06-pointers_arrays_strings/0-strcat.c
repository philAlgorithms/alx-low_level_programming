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
	char dest2[900];
	char *ptr = dest2;

	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		dest2[i] = dest[i];
		i++;
	}
	while (src[j] != '\0')
	{
		dest2[i + j] = src[j];
		j++;
	}

	dest2[i + j] = '\0';

	return (ptr);
}

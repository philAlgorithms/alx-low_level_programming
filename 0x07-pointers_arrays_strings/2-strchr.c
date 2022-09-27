#include "main.h"

/**
 * _strchr - locates a character in a string.
 * @s: pointer to the string
 * @c: the character
 *
 * Return: If c is found - Pointer to first occurence of the character
 * If c is not found - NULL
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
	}

	return ("\0");
}

#include "main.h"

/**
 * _strlen_recursion - returns the length of a string.
 * @s: pointer to the string
 *
 * Return: length of the string
 */
int _strlen_recursion(char *s)
{
	int res = 0;

	if (*s)
		return (res + 1 + _strlen_recursion(s + 1));
	else
		return (0);
}

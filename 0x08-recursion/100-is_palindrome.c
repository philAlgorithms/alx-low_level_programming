#include "main.h"
/**
 * _strlen - gets length of a string
 * @s: pointer to string
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	if (*s)
		return (1 + _strlen(s + 1));
	else
		return (0);
}
/**
 * check_palindrome - checks if string if palindome recursively
 * @s: pointer to the string
 * @i: current index
 * @len: length of the string
 *
 * Return: 1 if palindrome or 0 if not palundrome;
 */
int check_palindrome(char *s, int i, int len)
{
	if (s[i] == s[len / 2])
		return (1);

	if (s[i] == s[len - i - 1])
		return (check_palindrome(s, i + 1, len));

	return (0);
}

/**
 * is_palindrome - checks if a string can be spelt the same either ways
 * @s: a pointer to the string
 *
 * Return: 1 if a string is a palindrome and 0 if not.
 */
int is_palindrome(char *s)
{
	int i = 0;
	int len = _strlen(s);

	if (!(*s))
		return (1);

	return (check_palindrome(s, i, len));
}

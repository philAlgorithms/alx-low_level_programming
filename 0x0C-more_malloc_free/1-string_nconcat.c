#include <stdlib.h>
#include "main.h"
/**
 * _strlen - gets length of a string
 * @s: the string
 *
 * Return: lemgth of s
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return (len);
}

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: length of n to be concatenated with s1
 *
 * Return: a pointer to the newly allocated space for the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j, len1, len2;

	s1 = s1 == NULL ? "" : s1;
	s2 = s2 == NULL ? "" : s2;

	len1 = _strlen(s1);
	len2 = _strlen(s2);
	len2 = n < len2 ? n : len2;

	str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)
		return (NULL);

	for (i = 0; s1[i]; i++)
		str[i] = s1[i];
	for (j = 0; j < len2; j++)
		str[i + j] = s2[j];
	str[i + len2] = '\0';

	return (str);
}

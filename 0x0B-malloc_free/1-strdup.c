#include <stdlib.h>
#include "main.h"

/**
 * _strdup - allocates a memory and fills it with a string
 * @str: the str to fill in the memory
 *
 * Return: returns a pointer to a newly allocated space in memory
 */
char *_strdup(char *str)
{
	char *string;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		len++;

	string = malloc((len + 1) * sizeof(char));

	if (string == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		string[i] = str[i];

	string[len] = '\0';

	return (string);
}

#include <stdlib.h>
#include "main.h"

int w_length(char *str);
int words_length(char *str);

/**
 * w_length - locates the end of a string
 * @str: the string to be iterated
 *
 * Return: the index of the end of the string
 */
int w_length(char *str)
{
	int i = 0, len = 0;

	while (*(str + i) && *(str + i) != ' ')
	{
		len++;
		i++;
	}

	return (len);
}

/**
 * words_length - gets number of words in a string
 * @str: the string
 *
 * Return: bumber of words in str
 */
int words_length(char *str)
{
	int i = 0, parole = 0, len = 0;

	for (i = 0; *(str + i); i++)
		len++;

	for (i = 0; i < len; i++)
	{
		if (*(str + i) != ' ')
		{
			parole++;
			i += w_length(str + i);
		}
	}

	return (parole);
}

/**
 * strtow - splits a string into words
 * @str: str to be split
 *
 * Return: pointer to an array of words
 */
char **strtow(char *str)
{
	char **strings;
	int i = 0, parole, w, characters, l;

	if (str == NULL || str[0] == '\0')
		return (NULL);

	parole = words_length(str);
	if (parole == 0)
		return (NULL);

	strings = malloc(sizeof(char *) * (parole + 1));
	if (strings == NULL)
		return (NULL);

	for (w = 0; w < parole; w++)
	{
		while (str[i] == ' ')
			i++;

		characters = w_length(str + i);

		strings[w] = malloc(sizeof(char) * (characters + 1));

		if (strings[w] == NULL)
		{
			for (; w >= 0; w--)
				free(strings[w]);

			free(strings);
			return (NULL);
		}

		for (l = 0; l < characters; l++)
			strings[w][l] = str[i++];

		strings[w][l] = '\0';
	}
	strings[w] = NULL;

	return (strings);
}

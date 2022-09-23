#include "main.h"

/**
 * leet - encodes a string into 1337
 * @str: The string to be encoded
 *
 * Return: a pointer to the encoded string
 */
char *leet(char *str)
{
	int i = 0, j;
	char low[5] = {'a', 'e', 'o', 't', 'l'};
	char up[5] = {'A', 'E', 'O', 'T', 'L'};
	char repl[5] = {'4', '3', '0', '7', '1'};

	while (str[i])
	{
		for (j = 0; j < 5; j++)
		{
			if (str[i] == low[j] || str[i] == up[j])
				str[i] = repl[j];
		}
		i++;
	}

	return (str);
}

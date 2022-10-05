#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of your program.
 * @ac: argument count
 * @av: argument vector
 *
 * Return: a concatenation of all elements of av
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i, a, b, len = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			len++;
	}

	str = malloc(sizeof(int) * len + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (a = 0; a < ac; a++)
	{
		for (b = 0; av[a][b]; b++)
			str[i++] = av[a][b];
		str[i++] = '\n';
	}
	str[len] = '\0';

	return (str);
}

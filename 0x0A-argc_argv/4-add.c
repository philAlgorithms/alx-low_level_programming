#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds up all positive arguments
 * @argc: number of arguments to main
 * @argv: array of pointers to arguments to main
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i, j, sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}

	printf("%d\n", sum);
	return (0);
}

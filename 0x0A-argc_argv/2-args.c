#include <stdio.h>

/**
 * main - prints the all arguments passed to it
 * @argc: number of arguments to main
 * @argv: array of pointers to arguments to main
 *
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}

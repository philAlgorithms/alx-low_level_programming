#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to POSIX stdout.
 * @filename: A pointer to the name of the file.
 * @letters: The number of letters the
 *           function should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t apri, legge, scrive;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	apri = open(filename, O_RDONLY);
	legge = read(apri, buf, letters);
	scrive = write(STDOUT_FILENO, buf, legge);

	if (apri == -1 || legge == -1 || scrive == -1 || scrive != legge)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(apri);

	return (scrive);
}

#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - reads a text file and print it to POSIX stdout
 * @filename: name of file
 * @letters: the number of letters in the text file
 * Return: if file name is NULL - 0 else - the number of bytes
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t o, r, w;
	char *buffer;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	o = open(filename. O_RDONLY);
	r = read(o, buffer, letters);
	w = write(STDOUT_FILEND, buffer, r);

	if (o == -1 || r == -1 || w != r)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(o);

	return (0);
}

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
	ssize_t a, b, c;
	char *buff;

	if (filename == NULL)
		return (0);

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);

	a = open(filename. O_RDONLY);
	b = read(o, buff, letters);
	c = write(STDOUT_FILEND, buff, b);

	if (a == -1 || b == -1 || c != b)
	{
		free(buff);
		return (0);
	}

	free(buff);
	close(a);

	return (c);
}

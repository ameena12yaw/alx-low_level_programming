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
	int fd, readed;

	char *buff = malloc(sizeof(char *) * letters);

	if (!buff)
		return (0);

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY, 0600);

	if (fd == -1)
		return (0);

	readed = read(fd, buff, letters);

	write(STDOUT_FILENO, buff, readed);

	free(buff);
	close(fd);

	return (readed);
}

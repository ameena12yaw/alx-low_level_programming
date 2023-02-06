#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content of the text
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd;

	if (!filename)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (fd == -1)
		return (-1);

	if (text_content)
		write(fd, text_content, _strlen(text_content));


	close(fd);
	return (1);
}

/**
 * _strlen - length of string
 * @s: string to count
 * Return: string length
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}


#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content of the text
 * Return: if function fails - -1, otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int a, b, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	b = write(a, text_content, length);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}


#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content:  the string to add to the end of the file
 * Return: if the function fails or file name is NULL - -1
 *         if the file does not exist or user lacks write permissions - -1
 *         otherwise - 1
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int a, b, length = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}

	a = open(filename, O_WRONGLY | O_APPEND);
	b = write(a, text_content, length);

	if (a == -1 || b == -1)
		return (-1);

	close(a);

	return (1);
}

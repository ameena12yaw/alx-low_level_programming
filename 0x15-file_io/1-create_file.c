#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be created
 * @text_content: content of the text
 * Return: if function fails - -1, otherwise - 1
 */

int create_file(const char *filename, char *text_content)
{
	int led;

	if (!filename)
		return (-1);

	led = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (led == -1)
		return (-1);

	if (text_content)
		write(led, text_content, _strlen(text_content));


	close(led);
	return (1);
}


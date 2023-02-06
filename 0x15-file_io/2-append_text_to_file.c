#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: name of the file
 * @text_content:  the string to add to the end of the file
 * Return: 1 on success, -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	int led;

	if (!filename)
		return (-1);

	led = open(filename, O_WRONLY | O_APPEND);

	if (led == -1)
		return (-1);

	if (text_content)
	{
		if (write(led, text_content, _strlen(text_content)) == -1)
			return (-1);
	}

	close(led);

	return (1);
}

/**
 * _strlen - the length of a string to return
 * @s: the string to count
 * Return: length of string
 */

int _strlen(char *s)
{
	int c = 0;

	while (s[c])
		c++;

	return (c);
}

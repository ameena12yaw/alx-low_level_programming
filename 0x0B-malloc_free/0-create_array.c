#include "main.h"

/**
 * create_array - prints a string
 * @size: number of elements in string
 * @c: character
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{
	char *str;
	unsigned int i;

	str = malloc(sizeof(char) * size);
	if (size == 0 || str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		str[i] = c;
	return (str);
}


#include "main.h"

/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1 on success, -1 on error
 */

int _strlen(char *s)
{
	unsigned int a;

	a = 0;
	while (s[a] != '\0')
	{
		a++;
	}
}

/**
 * _strcpy - copy array
 * @src: source array
 * @dest: destination of array
 * Return: Always 0 (SUccess)
 */

char *_strcpy(char *dest, char *src)
{
	int a = 0;

	while (src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	dest[a] = '\0';

	return (dest);
}

/**
 * _strdup - prints string
 * @str: elements
 * Return: Always 0 (Success)
 */

char *_strdup(char *str)
{
	char *dst;
	unsigned int size;

	if (str == 0)
	{
		return (NULL);
	}

	size = _strlen(str) + 1;

	dst = (char *) malloc(size * sizeof(char));

	if (dst == 0)
	{
		return (NULL);
	}
	_strcpy(dst, str);
	return (dst);
}































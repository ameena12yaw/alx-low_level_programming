#include "main.h"

/**
 * _strncpy - copy a string with n
 * @dest: destination of string
 * @src: source of string
 * @n: number of characters to be copied
 * Return: ALways 0 (Success)
 */

char *_strncpy(char *dest, char *src, int n)
{
	int b;

	b = 0;
	while (b < n && src[b] != '\0')
	{
		dest[b] = src[b];
		b++;
	}
	while (b < n)
	{
		dest[b] = '\0';
		b++;
	}

	return (dest);
}

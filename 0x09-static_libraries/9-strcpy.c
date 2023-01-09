#include "main.h"
#include <stdio.h>

/**
 * _strcpy - copies the string pointed to by src
 * @dest: destination
 * @src: sourse
 * Return: Always 0 (Success)
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;

	while (*(src + length) != '\0')
	{
		*(dest + length) = *(src + length);
		length++;
	}

	*(dest + length) = '\0';
	return (dest);
}

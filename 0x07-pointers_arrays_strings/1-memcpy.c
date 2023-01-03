#include "main.h"

/**
 * _memcpy - copy another buffer to memory
 * @dest: destination
 * @src: source 
 * @n: length of buffer
 * Return: Always 0 (Success)
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a = 0;

	while (a < n)
	{
		*(dest + a) = *(src + a);
		a++;
	}
	return (dest);
}

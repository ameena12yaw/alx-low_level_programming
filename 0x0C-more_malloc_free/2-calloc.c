#include "main.h"

/**
 * _calloc - allocated memoty for size bytes
 * @number: number of elements in the array
 * @size: bytes for each array
 * Return: pointer void
 */

void *_calloc(unsigned int number, unsigned int size)
{
	char *p;
	unsigned int i;

	if (number == 0 || size == 0)
		return (NULL);

	p = malloc(number * size);
	if (p == NULL)
		return (NULL);

	for (i = 0, i < number * size; i++)
		p[i] = 0;

	return (p);
}

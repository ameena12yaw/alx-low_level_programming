#include "main.h"

/**
 * _calloc - allocated memoty for size bytes
 * @nmedb: number of elements in the array
 * @size: bytes for each array
 * Return: pointer void
 */

void *_calloc(unsigned int nmedb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmedb == 0 || size == 0)
		return (NULL);

	p = malloc(nmedb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0, i < nmedb * size; i++)
		p[i] = 0;

	return (p);
}

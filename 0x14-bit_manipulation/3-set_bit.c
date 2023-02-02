#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index to 1
 * @n: A pointer to the bit
 * @index: the index to set the value at - indeces start at 0
 * Return: if error - -1, otherwise - 1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index
 * @n: the bit
 * @index: the index to get the value
 * Return: if an error occurs - -1, otherwise - the value of the bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

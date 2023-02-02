#include "main.h"

/**
 * clear_bit - Sets the value of a bit at a giver index to 0
 * @n: A pointer to the bit
 * @index: the index to set the value
 * Return: if error - -1, otherwise - 1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

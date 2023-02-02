#include "main.h"

/**
 * binary_to_unit - converts binary number to unsigned integer
 * @b: string containing the binary number
 * Return: the converted number
 */


unsigned int binary_to_unit(const char *b)
{
	int a;
	unsigned int unit = 0;

	if (!b)
		return (0);

	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		unit = 2 * unit + (b[a] - '0');
	}

	return (unit);
}

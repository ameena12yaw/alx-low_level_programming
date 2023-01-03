#innclude "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonal matrix
 * @a: input pointer
 * @size: size of the matrix
 * Return: Always 0 (Success)
 */

void print_diagsums(int *a, int size)
{
	int d, sum_1 = 0, sum_2 = 0;

	for (d = 0; d < (size * size); d++)
	{
		if (d % (size + 1) == 0)
			sum_1 += *(a + d);
		if (d % (size - 1) == 0 && d != 0 && d < size * size - 1)
			sum_2 += *(a + d);
	}
	printf("%d, %d\n", sum_1, sum_2);
}

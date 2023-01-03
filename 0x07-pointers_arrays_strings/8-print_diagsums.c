#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the diagonals of a square matrix
 * @a: the matrix of integers
 * @size: the size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int index, sum_1 = 0, sum_2 = 0;

	for (index = 0; index < size; index++)
	{
		sum_1 += a[index];
		a += size;
	}
	a -= size;
	for (index = 0; index < size; index++)
	{
		sum_2 += a[index];
		a -= size;
	}
	printf("%d, %d\n", sum_1, sum_2);
}

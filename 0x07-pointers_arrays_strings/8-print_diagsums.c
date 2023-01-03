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
	printf("%d, %d", sum_1, sum_2);
}

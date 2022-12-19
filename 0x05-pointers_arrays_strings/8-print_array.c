#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an array
 * @a: array
 * @n: number of values to be printed
 */

void print_array(int *a, int n)
{
	int v;

	for (v = 0; v < n; v++)
	{
		printf("%d", a[v]);
		if (v != n - 1)
			printf(", ");
	}
	printf("\n");
}

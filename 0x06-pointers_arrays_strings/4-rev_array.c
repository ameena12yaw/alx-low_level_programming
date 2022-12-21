#include "main.h"

/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements of the array
 * Return: Always 0 (SUccess)
 */

void reverse_array(int *a, int n)
{
	int x;
	int z;

	for (x = 0; x < n; x++)
	{
		n--;
		z = a[x];
		a[x] = a[n];
		a[n] = z;
	}
}

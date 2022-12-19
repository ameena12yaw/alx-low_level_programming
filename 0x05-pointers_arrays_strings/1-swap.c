#include "main.h"
#include <stdio.h>

/**
 * swap_int - swaps the values of integers
 * @a: first integer
 * @b: second integer
 * Retun: Always 0 (success)
 */

void swap_int(int *a, int *b)
{
	int num;

	num = *a;
	*a = *b;
	*b = num;
}

#include "main.h"

/**
 * _evaluate - evalutes function
 * @i: integer
 * @n: integer
 * Return: Always 0 (Success)
 */

int _evaluate(int i, int n)
{
	if (n == 0 || n == 1)
		return (n);
	else if (i + 1 < n)
		return (_evaluate(i + 1, n));
	else if (i * i == n)
		return (i);
}

#include <stdio.h>

/**
 * main - prints largest prime factor.
 * Return: Always 0 (Success).
 */

int main(void)
{
	long int b, pf;

	b = 612852475143;

	for (pf = 2; pf <= n; pf++)
	{
		if (b % pf == 0)
		{
			b /= pf
			pf--;
		}
	}
	printf("%ld\n", pf);

	return (0);
}

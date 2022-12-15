#include <stdio.h>
#include "main.h"

/**
 * main - prints largest prime factor.
 * Return: Always 0 (Success).
 */

int main(void)
{
	long int a, num;

	a = 612852475143;
	for (num = 2; num <= a; num++)
	{
		if (a % num == 0)
		{
			n /= num;
			num--;
		}
	}
	printf("%ld\n", num);
	return (0);
}

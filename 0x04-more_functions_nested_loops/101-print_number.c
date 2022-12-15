#include <stdio.h>
#include "main.h"

/**
 * print_number - prints integer.
 * @n: input integer.
 * Return: no return.
 */

void print_number(int n)
{
	unsigned int t, v, count;

	if (n < 0)
	{
		_putchar(45);
		t = m * -1;
	}
	else
	{
		t = n;
	}

	v = t;
	count = 1;

	while (v > 9)
	{
		v /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		_putchar(((t / count) % 10) + 48);
	}
}

#include <stdlib.h>
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers followed by a new line
 * @seperator: string to be printed
 * @n: number of integers in the function
 * Return: void
 */

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int a;
	va_list num;

	va_start(num, n);

	for (a = 0; a < n; a++)
	{
		printf("%d", va_arg(num, int));
		if (a < n - 1 && seperator != NULL)
			printf("%s", seperator);
	}
	printf("\n");

	va_end(num);
}

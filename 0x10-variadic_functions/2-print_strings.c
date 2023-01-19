#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>

/**
 * print_strings - print strings followed by a new line
 * @seperator: strings to be printed
 * @n: number of strings
 * Return: void
 */

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int a;
	char *t;
	va_list str;

	if (seperator == NULL)
		seperator = "";

	va_start(str, n);

	for (a = 0; a < n; a++)
	{
		t = va_arg(str, char *);

		if (t == NULL)
			t = "(nil)";
		printf("%s", t);
		if (a < n - 1)
		{
			printf("%s", seperator);
		}
	}
	printf("\n");
	va_end(str);
}

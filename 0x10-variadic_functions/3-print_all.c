#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>

/**
 * print_all - prints anything
 * @format: lists all arguments passed to the function
 * Return: void
 */

void print_all(const char * const format, ...)
{
	unsigned int b;
	va_list args;
	char *s, *seperator;

	va_start(args, format);

	seperator = "";

	b = 0;
	while (format && format[b])
	{
		switch (format[b])
		{
			case 'c':
				printf("%s%c", seperator, va_arg(args, int));
				break;
			case 'i':
				printf("%s%d", seperator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", seperator, va_arg(args, double));
				break;
			case 's':
				s = va_arg(args, char *);
				if (s == NULL)
					s = "(nil)";
				printf("%s%s", seperator, s);
				break;
			default:
				b++;
				continue;
		}
		seperator = ", ";
		b++;
	}
	printf("\n");
	va_end(args);
}














#include "main.h"

/**
 * _strstr - finds the first occurrance of the substring
 * @haystack: entire string
 * @needle: substring
 * Return: Always 0 (Success)
 */

char *_strstr(char *haystack, char *needle)
{
	char *b_haystack;
	char *p_needle;

	while (*haystack != '\0')
	{
		b_haystack = haystack;
		p_needle = needle;

		while (*haystack != '\0' && *p_needle != '\0' && *haystack == *p_needle)
		{
			haystack++;
			pneedle++;
		}
		if (!*p_needle)
			return (b_haystack);
		haystack = b_haystack + 1;
	}
	return (0);
}

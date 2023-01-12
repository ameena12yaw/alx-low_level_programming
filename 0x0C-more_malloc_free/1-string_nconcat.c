#include "main.h"
#include <stdlib.h>
#include <stdlib.h>

/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: Always 0 (Success)
 */

int _strlen(char *string)
{
	int a;

	for (a = 0; string[a] != '\0'; a++)
		;
	return (a);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: n bytes to concat from string 2
 * Return: concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	int num, len, a, b;

	num = n;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (num < 0)
		return (NULL);
	if (num >= _strlen(s2))
		num = _strlen(s2);

	len = _strlrn(s1) + num + 1;

	ptr = malloc(sizeof(*ptr) * len);
	if (ptr == NULL)
		return (NULL);

	for (a = 0; s1[a] != '\0'; a++)
		ptr[a] = s1[a];
	for (b = 0; b < num; b++)
		ptr[a + b] = s2[b];
	prt[a + b] = '\0';

	return (ptr);
}
















































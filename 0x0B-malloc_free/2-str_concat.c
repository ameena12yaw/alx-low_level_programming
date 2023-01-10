#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat - concatenate stings
 * @s1: first string
 * @s2: second string
 * Return: Always 0 (Success)
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int len_1, len_2, size a, b;
	char *nstr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len_1 = 0;
	while (s1[len_1] != '\0')
		len_1++;
	while (s2[len_2] != '\0')
		len_2++;

	size = len_1 + len_2;

	nstr = malloc((sizeov(char) * size) + 1);

	if (nstr == NULL)
		return (NULL);

	a = 0;

	while (a < len_1)
	{
		nstr[a] = s1[a];
		a++;
	}
	b = 0;

	while (a <= size)
	{
		nstr[a] = s2[b];
		a++;
		b++;
	}
	return (nstr);
}

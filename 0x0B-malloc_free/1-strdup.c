#include "main.h"
#include <stdlib.h>

/**
 * _strdup - pointer to a newly allocated
 * @str: pointer to string being duplicated
 * Return: ALways 0 (Success)
 */

char *_strdup(Char *str)
{
	char *nstr;

	unsigned int len, i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	nstr = malloc(sizeof(char) * (len + 1));

	if (nstr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < len; i++)
	{
		nstr[i] = str[i];
	}

	nstr[len] = '\0';
	return (nstr);
}

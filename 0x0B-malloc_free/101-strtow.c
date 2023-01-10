#include <stdlib.h>
#include <stdio.h>

/**
 * wordnos - counts number of words in a string
 * @s: string
 * Return: Always 0 (Success)
 */

int wordnos(char *s)
{
	int str, a, b;

	str = 0;
	b = 0;

	for (a = 0; s[a] != '\0'; a++)
	{
		if (s[a] == ' ')
			str = 0;
		else if (str == 0)
		{
			str = 1;
			b++;
		}
	}
	return (b);
}

/**
 * **strtow - splits a string into words
 * @str: string to print
 * Return: Always 0 (Success)
 */

char **strtow(char *str)
{
	char **matrix, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;
	words = wordnos(str);
	if (words == 0)
		return (NULL);

	matrix = (char **) malloc(sizeof(char *) * (words + 1));
	if (matrix == NULL)
		return (NULL);

	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];
				*tmp = '\0';
				matrix[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	matrix[k] = NULL;

	return (matrix);
}
















































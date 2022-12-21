#include "main.h"
/**
 * _strcat - concatennates two strings
 * @dest: copy to
 * @src: copy from
 * Return: Always 0 (Success)
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[1] != '\0')
	{
		i++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: first member
 * @age: second member
 * @owner: third member
 * Return: NULL on fail
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	int i, len_1, len_2;

	struct dog *n_dog = NULL;

	len_1 = 0;
	while (name[len_1] != '\0')
		len_1++;
	len_2 = 0;
	while (owner[len_2] != '\0')
		len_2++;

	n_dog = malloc(sizeof(struct dog));
	if (n_dog == NULL)
	{
		free(n_dog);
		return (NULL);
	}
	n_dog->name = malloc(len_1 + 1);
	if (n_dog->name == NULL)
	{
		free(n_dog->name);
		free(n_dog);
		return (NULL);
	}
	n_dog->owner = malloc(len_2 + 1);
	if (n_dog->owner == NULL)
	{
		free(n_dog->name);
		free(n_dog->owner);
		free(n_dog);
		return (NULL);
	}
	for (i = 0; i <= len_1; i++)
		n_dog->name[i] = name[i];
	for (i = 0; i <= len_2; i++)
		n_dog->owner[i] = owner[i];
	n_dog->age = age;
	return (n_dog);
}

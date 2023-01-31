#include "lists.h"

/**
 * add_nodeint - add a new a node at the beginning of a list
 * @head: a pointer to the address of the head of a list
 * @n: integer
 * Return: when function fails - NULL. otherwise - the new element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}

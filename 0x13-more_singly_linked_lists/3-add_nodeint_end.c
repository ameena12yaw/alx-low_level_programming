#include "lists.h"

/**
 * add_nodeint_end - Adds a new node at the end of a list
 * @head: points to the address of the head of a list
 * @n: integer
 * Return: function fails - NULL. otherwise - the address of the new elements
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
	}

	return (*head);
}

i#include "lists.h"

/**
 * pop_listint - Deletes the head node
 * @head: points to the address of the head of a list
 * Return: if empty - 0. otherwuse - the head node's date
 */

int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int ret;

	if (*head == NULL)
		return (0);

	tmp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (ret);
}

#include "lists.h"

/**
 * free_listint - frees a list
 * @head: A ponter to the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

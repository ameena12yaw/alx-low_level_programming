#include "lists.h"

/**
 * sum_listint - calculates the sum of the list
 * @head: A pointer to the head of the list
 * Return: if empty - 0, otherwise - sum of list
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

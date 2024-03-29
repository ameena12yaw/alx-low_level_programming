#include "lists.h"
#include <stdio.h>

/**
 * listint_len - calculates the number of elements in a linked list
 * @h: head of the linkes list
 * Return: the number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t node = 0;

	while (h)
	{
		node++;
		h = h->next;
	}

	return (node);
}

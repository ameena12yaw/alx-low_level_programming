#include "lists.h"

/**
 * get_nodeint_at_index - gets a given node of a list
 * @head: a pointer to the head of the list
 * @index: the index of the node to get
 * Return: if node does not exist - NULL, otherwise - the node
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node;

	for (node = 0; node < index; index++)
	{
		if (head == NULL)
			return (NULL);

		head = head->next;
	}

	return (head);
}

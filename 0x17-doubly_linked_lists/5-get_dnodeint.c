#include "lists.h"

/**
  *get_dnodeint_at_index - traverses to node at index
  *@head: start of the list
  *@index: node to fetch
  *
  *Return: retrurns the node or NULL if not found
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node = head;
	size_t num = 0;

	if (head == NULL)
		return (NULL);

	while (num < index && node)
	{
		node = node->next;
		num++;
	}

	if (num != index)
		return (NULL);

	return (node);
}

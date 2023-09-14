#include "lists.h"

/**
  *dlistint_len - returns the number of nodes in a list
  *@h: the first node
  *
  *Return: number of nodes in a list
  */
size_t dlistint_len(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current = h;

	if (h == NULL)
		return (nodes);

	while (current)
	{
		nodes++;
		current = current->next;
	}

	return (nodes);
}

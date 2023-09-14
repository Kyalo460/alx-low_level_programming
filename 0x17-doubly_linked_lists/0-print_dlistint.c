#include "lists.h"

/**
  *print_dlistint - prints values stored in a list
  *@h: the first node
  *
  *Return: the number of nodes in a list
  */
size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes = 0;
	const dlistint_t *current = h;

	if (h == NULL)
		return (nodes);

	while (current)
	{
		printf("%d\n", current->n);
		current = current->next;
		nodes++;
	}

	return (nodes);
}

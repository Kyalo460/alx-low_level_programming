#include "lists.h"

/**
  *insert_dnodeint_at_index - inserts a node at a given index in the list
  *@h: pointer to pointer to start of the list
  *@idx: index to insert new node
  *@n: value to assign in the new node
  *
  *Return: returns new node or NULL if the process fails
  */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *previous;
	dlistint_t *current = *h;
	dlistint_t *new;
	size_t num = 0;

	if (h == NULL)
		return (NULL);

	while (current && num < idx)
	{
		previous = current;
		current = current->next;
		num++;
	}

	printf("%lu\n\n", num);
	if (num != idx)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = current;
	if (idx != 0)
	{
		previous->next = new;
		new->prev = previous;
	}
	else
	{
		*h = new;
		new->prev = NULL;
	}

	if (current != NULL)
		current->prev = new;

	return (new);
}

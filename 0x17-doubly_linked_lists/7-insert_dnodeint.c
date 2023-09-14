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
	dlistint_t *current = *h;
	dlistint_t *new;
	size_t num = 0;

	if (h == NULL)
		return (NULL);

	while (current->next && num < idx)
	{
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
	(current->prev)->next = new;
	new->prev = current->prev;

	if (current != NULL)
		current->prev = new;

	return (new);
}

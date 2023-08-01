#include "lists.h"
/**
  *insert_nodeint_at_index - inserts node at n-th location
  *@head: reference to first node
  *@idx: index of the location
  *@n: integer to assign in new node
  *
  *Return: returns the new node in the list;
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *current;
	size_t count = 0;

	current = *head;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		*head = new;
		new->next = current;
		*head = new;
		return (new);
	}

	while (count < (idx - 1))
	{
		if (current == NULL || current->next == NULL)
			return (NULL);

		current = current->next;
		count++;
	}

	new->next = current->next;
	current->next = new;

	return (new);
}

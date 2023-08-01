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
	listint_t *temp;
	listint_t *current;
	size_t count = 0;

	current = *head;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (idx == 0)
	{
		temp = current;
		*head = new;
		new->next = temp;
		return (new);
	}

	while (count < (idx - 1))
	{
		if (current == NULL || current->next == NULL)
			return (NULL);
		current = current->next;
		count++;
	}

	temp = current->next;
	current->next = new;
	new->next = temp;

	return (new);
}

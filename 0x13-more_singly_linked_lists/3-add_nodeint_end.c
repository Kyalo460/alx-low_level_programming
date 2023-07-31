#include "lists.h"
/**
  *add_nodeint_end - adds node at the end of list
  *@head: the start of list
  *@n: value to be added in new node
  *
  *Return: returns the new node or NULL if fail
  */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;
	listint_t *last;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	last = *head;

	while (last->next != NULL)
	{
		last = last->next;
	}

	last->next = new;

	return (new);
}

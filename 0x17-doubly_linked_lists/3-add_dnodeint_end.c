#include "lists.h"

/**
  *add_dnodeint_end - adds a new node at the end of a list
  *@head: pointer to pointer to beginning of a list
  *@n: value to assign in new node
  *
  *Return: new node or NULL if failed
  */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current = *head;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	while (current && current->next)
		current = current->next;

	new->next = NULL;
	new->prev = current;

	if (current)
		current->next = new;

	else
		*head = new;

	return (new);
}

#include "lists.h"

/**
  *add_dnodeint - adds a node at the beginnig of a list
  *@head: pointer to pointer to the first node
  *@n: the value to assign in new node
  *
  *Return: return new node or NULL if failed
  */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *prev = *head;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = prev;
	new->prev = NULL;

	if (prev != NULL)
		prev->prev = new;

	*head = new;

	return (new);
}

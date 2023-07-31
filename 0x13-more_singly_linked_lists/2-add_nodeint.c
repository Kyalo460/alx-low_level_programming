#include "lists.h"
/**
  *add_nodeint - adds new node at beginning
  *@head: beginning of list
  *@n: value to be added
  *
  *Return: pointer to the new start of list
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}

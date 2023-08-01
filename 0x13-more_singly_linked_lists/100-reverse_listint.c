#include "lists.h"
/**
  *reverse_listint - reverses a list
  *@head: first node
  *
  *Return: returns a reversed list
  */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous;
	listint_t *target;

	if (*head == NULL)
		return (*head);

	target = (*head)->next;
	(*head)->next = NULL;
	previous = *head;

	while (target)
	{
		*head = target;
		target = target->next;
		(*head)->next = previous;
		previous = *head;
	}

	return (*head);
}

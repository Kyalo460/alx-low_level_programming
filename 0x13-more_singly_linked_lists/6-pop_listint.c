#include "lists.h"
/**
  *pop_listint - deletes the head of list
  *@head: reference to first node
  *
  *Return: returns the value of first node before deletion
  */
int pop_listint(listint_t **head)
{
	listint_t *h;
	listint_t *next;
	int n;

	if (head == NULL)
		return (0);

	h = *head;
	n = h->n;
	next = h->next;
	free(*head);
	*head = next;
	return (n);
}

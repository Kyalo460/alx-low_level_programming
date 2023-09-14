#include "lists.h"

/**
  *sum_dlistint - calculates the sum of list data
  *@head: the start of the list
  *
  *Return: returns the sum
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;
	int sum = 0;

	if (head == NULL)
		return (sum);

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

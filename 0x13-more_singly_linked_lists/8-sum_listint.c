#include "lists.h"
/**
  *sum_listint - gives the sum of list integers
  *@head: the first node
  *
  *Return: sum of list integers
  */
int sum_listint(listint_t *head)
{
	listint_t *current;
	size_t sum = 0;

	current = head;

	while (current)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}

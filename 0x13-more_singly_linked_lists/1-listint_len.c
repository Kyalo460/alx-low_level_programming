#include "lists.h"
/**
  *listint_len - finds the number of nodes
  *@h: the start of the list
  *
  *Return: returns the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t num = 1;
	listint_t *temp;

	temp = h->next;

	while (temp)
	{
		num++;
		temp = temp->next;
	}

	return (num);
}

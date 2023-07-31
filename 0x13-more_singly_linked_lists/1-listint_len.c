#include "lists.h"
/**
  *listint_len - finds the number of nodes
  *@h: the start of the list
  *
  *Return: returns the number of nodes
  */
size_t listint_len(const listint_t *h)
{
	size_t num = 0;
	const listint_t *temp;

	temp = h;

	while (temp)
	{
		num++;
		temp = temp->next;
	}

	return (num);
}

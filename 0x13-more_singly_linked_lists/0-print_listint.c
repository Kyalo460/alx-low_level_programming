#include "lists.h"
/**
  *print_listint - prints integer values in list
  *@h: first node of the list;
  *
  *Return: number of nodes in the list
  */
size_t print_listint(const listint_t *h)
{
	size_t num = 0;
	listint_t *temp;
	
	printf("%d\n", h->n);
	num++;
	temp = h->next;

	while (temp)
	{
		printf("%d\n", temp->n);
		temp = temp->next;
		num++;
	}

	return (num);
}

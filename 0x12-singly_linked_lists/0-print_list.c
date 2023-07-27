#include <stdio.h>
#include "lists.h"
/**
  *print_list - Prints the linked list
  *@h: pointer to start of list
  *
  *Return: number of nodes in linked list
  */
size_t print_list(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");

		else
			printf("[%d] %s\n", h->len, h->str);

		nodes++;
		h = h->next;
	}

	return (nodes);
}

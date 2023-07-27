#include "lists.h"
/**
  *list_len - counts the amount of nodes in a linked list
  *@h: pointer to the first node
  *
  *Return: return the amount of nodes
  */
size_t list_len(const list_t *h)
{
	int nodes = 0;

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}

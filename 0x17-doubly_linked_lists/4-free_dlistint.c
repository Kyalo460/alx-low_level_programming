#include "lists.h"

/**
  *free_dlistint - frees a doubly linked list
  *@head: start of the list
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *del = head;

	if (head != NULL)
	{
		while (head)
		{
			head = head->next;
			free(del);
			del = head;
		}
	}
}

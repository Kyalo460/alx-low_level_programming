#include "lists.h"
/**
  *free_listint - frees a list
  *@head: start of list
  */
void free_listint(listint_t *head)
{
	listint_t *current;
	listint_t *next;

	current = head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
}

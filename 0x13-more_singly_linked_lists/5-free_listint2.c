#include "lists.h"
/**
  *free_listint2 - frees a list
  *@head: reference to the start of list
  */
void free_listint2(listint_t **head)
{
	listint_t *current;
	listint_t *next;

	current = *head;

	while (current)
	{
		next = current->next;
		free(current);
		current = next;
	}
	*head = NULL;
}

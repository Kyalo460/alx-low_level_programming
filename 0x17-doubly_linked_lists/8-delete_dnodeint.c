#include "lists.h"

/**
  *delete_dnodeint_at_index - deletes the node at nth location
  *@head: poiinter to pointer to first node
  *@index: the position of the node to delete
  *
  *Return: 1 if successfull or 0 if fail
  */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current = *head;
	size_t num = 0;

	if (*head == NULL)
		return (-1);

	while (current->next && num < index)
	{
		current = current->next;
		num++;
	}

	if (num != index)
		return (-1);

	if (current->next != NULL)
		(current->next)->prev = current->prev;

	if (current->prev != NULL)
		(current->prev)->next = current->next;
	else
	{
		*head = current->next;
		if (current->next)
			(current->next)->prev = NULL;
		else
			*head = NULL;
	}

	free(current);
	current = NULL;

	return (1);
}

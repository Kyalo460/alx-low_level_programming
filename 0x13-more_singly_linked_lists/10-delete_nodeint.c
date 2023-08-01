#include "lists.h"
/**
  *delete_nodeint_at_index - deletes n-th node
  *@head: reference to first node
  *@index: n-th node
  *
  *Return: 1 (success) -1 (fail)
  */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	size_t count = 0;
	listint_t *current;
	listint_t *delete;

	current = *head;

	if (*head == NULL && index == 0)
		return (1);

	if (index == 0)
	{
		*head = current->next;
		free(current);
		return (1);
	}

	while (count < (index - 1))
	{
		if (current == NULL)
			return (-1);

		current = current->next;
		count++;
	}

	delete = current->next;
	current->next = delete->next;
	free(delete);

	return (1);
}

#include "lists.h"
/**
  *get_nodeint_at_index - looks for a specific node
  *@head: the first node
  *@index: node index
  *
  *Return: pointer to node we are looking for
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	size_t counter = 0;
	listint_t *current;

	current = head;

	while (counter < index)
	{
		current = current->next;
		if (current == NULL)
			return (current);

		counter++;
	}

	return (current);
}

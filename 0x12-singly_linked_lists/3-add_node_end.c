#include "lists.h"
/**
  *add_node_end - adds a node at end of list
  *@head: address held at head
  *@str: the string to be added
  *
  *Return: returns the address of new memory or
  *        NULL if it fails
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

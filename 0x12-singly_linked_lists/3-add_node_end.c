#include "lists.h"
/**
  *
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	size_t len;
	list_t *temp = *head;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while(str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if(*head == NULL)
		*head = new;

	else
	{
		temp = *head;
		while (temp->next)
			temp = temp->next;

		temp->next = new;
	}

	return (new);
}

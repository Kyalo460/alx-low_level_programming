#include "lists.h"
/**
  *add_node - adds a new node at the beginning of a list
  *@head: pointer to the pointer pointing to first node
  *@str: string to be added in new node
  *
  *Return: returns new node if successfull or NULL if not successful
  */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	size_t len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[len])
		len++;

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);

	(*head) = new;

	return (*head);
}

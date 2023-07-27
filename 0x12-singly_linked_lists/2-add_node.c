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
	char *duplicate = strdup(str);
	list_t *new;
	int len = 0;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	if (duplicate == NULL)
	{
		free(new);
		return (NULL);
	}

	while (duplicate[len])
		len++;

	new->str = duplicate;
	new->len = len;
	new->next = *head;

	*head = new;

	return (new);
}

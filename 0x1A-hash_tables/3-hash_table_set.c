#include "hash_tables.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/**
  *hash_table_set - adds a new element to the hash table
  *@ht: the hash table
  *@key: the key to genarate hash
  *@value: the value of the new element
  *
  *Return: returns 1 if successful 0 if failed
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int index, size = 1024;
	hash_node_t *current, *new_node = malloc(sizeof(hash_node_t));

	if (key == "")
		return (0);
	if (new_node == NULL)
		return (0);

	if (ht == NULL)
		return (0);

	index = key_index((unsigned char *)key, size);
	new_node->key = strdup(key);
	new_node->value = strdup(value);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}
	else
	{
		current = ht->array[index];
		while (current)
		{
			if (strcmp(current->key, new_node->key) == 0)
			{
				free(current->value);
				current->value = strdup(new_node->value);
				free(new_node->key);
				free(new_node->value);
				free(new_node);
				return (1);
			}
			current = current->next;
		}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	}
	return (1);
}

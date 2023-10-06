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
	unsigned long int index;
	hash_node_t *current, *new_node;

	if (strcmp(key, "") == 0 || ht == NULL || !key)
		return (0);

	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	new_node->key = strdup(key);
	new_node->value = value ? strdup(value) : NULL;

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
		new_node->next = NULL;
	}
	else
	{
		current = ht->array[index];
		while (current && new_node->key)
		{
			if (strcmp(current->key, new_node->key) == 0)
			{
				free(current->value);
				current->value = value ? strdup(new_node->value) : NULL;
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

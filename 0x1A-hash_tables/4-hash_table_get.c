#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
/**
  *hash_table_get - fishes out the element from the hash table
  *@ht: the hash table
  *@key: the key for genarating hash
  *
  *Return: returns the value or NULL if failed
  */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned int index;
	hash_node_t *node = NULL;

	if (ht == NULL)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	if (ht->array[index] == NULL)
		return (NULL);

	node = ht->array[index];

	while (node)
	{
		if (strcmp((char *)key, node->key) == 0)
			return (node->value);

		node = node->next;
	}

	if (node)
		return (node->value);

	return (NULL);
}

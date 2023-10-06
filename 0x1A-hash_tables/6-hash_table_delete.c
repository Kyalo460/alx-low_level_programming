#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>

/**
  *hash_table_delete - deletes the hash table by freeing memory
  *@ht: the hash table
  */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index = 0;
	hash_node_t *delete;

	if (ht == NULL)
		exit(0);

	while (index < ht->size)
	{
		while (ht->array[index])
		{
			delete = ht->array[index];
			ht->array[index] = ht->array[index]->next;

			free(delete->value);
			free(delete->key);
			free(delete);
		}
		index++;
	}

	free(ht->array);
	free(ht);
	ht = NULL;
}

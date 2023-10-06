#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>

/**
  *hash_table_print - prints to stdout the values in a hash table
  *@ht: the hash table
  */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int index = 0, count = 0;
	hash_node_t *current;

	if (ht == NULL)
	{
		printf("{}\n");
		exit(1);
	}

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		if (ht->array[index] == NULL)
			continue;

		current = ht->array[index];
		count++;
		if (count > 1)
			printf(", ");

		printf("'%s': '%s'", current->key, current->value);

		while (current->next)
		{
			current = current->next;
			printf(", '%s': '%s'", current->key, current->value);
		}
	}
	printf("}\n");
}

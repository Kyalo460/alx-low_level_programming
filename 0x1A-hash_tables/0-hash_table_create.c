#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
  *hash_table_create - creates a hash table
  *@size: the number of elements the array can have
  *
  *Return: return a pointer to the table or NULL if failed
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int x;
	hash_table_t *new_table;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(hash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->size = size;

	new_table->array = malloc(new_table->size * sizeof(hash_node_t *));
	if (new_table->array == NULL)
		return (NULL);

	for (x = 0; x < size; x++)
	{
		new_table->array[x] = NULL;
	}

	return (new_table);
}

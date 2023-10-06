#include "hash_tables.h"

/**
  *key_index - returns the index where the value will be stored
  *@key: the string that will be used to genarate hash
  *@size: the size of the array
  *
  *Return: returns the index in the array where the value will be stored
  */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned int index;
	unsigned long int hash = hash_djb2(key);

	index = hash % size;
	return (index);
}

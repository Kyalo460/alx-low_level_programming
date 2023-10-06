#include "hash_tables.h"

/**
  *hash_djb2 - a hashing function that returns a hash value
  *@str: the string being hashed
  *
  *Return: returns the unique hash value
  */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = (hash << 5) + hash + c;
	}

	return (hash);
}

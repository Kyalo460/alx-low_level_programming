#include "main.h"
#include <stdlib.h>
/**
  *create_array- creates an array of size @size and initialises it with @c
  *@size: amount of characters to account for
  *@c: a character
  *Return: returns a pointer to the memory location if successful
  */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	if (size == 0)
		return (NULL);

	arr = malloc(sizeof(c) * size);

	while (i <= size)
	{
		arr[i] = c;
		i++;
	}

	return (arr);
}

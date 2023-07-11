#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
  *_strdup - returns the memory location of a duplicate string
  *@str: expects a string literal
  *Return: return the memory location if successful
  *        return NULL if unsuccessful
  */
char *_strdup(char *str)
{
	char *ptr_str;
	unsigned int size;
	unsigned int i;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		size++;
		str++;
	}
	str -= size;
	size++;

	if (size == 0)
		return (NULL);

	ptr_str = malloc(sizeof(*str) * size);

	if (ptr_str == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		ptr_str[i] = str[i];
	}
	return (ptr_str);
}

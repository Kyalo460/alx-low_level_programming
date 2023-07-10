#include <stdlib.h>
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
	unsigned int i = 0;

	if (str == NULL)
		return (NULL);

	while (*str)
	{
		size++;
		str++;
	}
	str -= size;
	size++;

	ptr_str = malloc(sizeof(char) * size);

	if (ptr_str == NULL)
		return (NULL);

	while (i < size)
	{
		ptr_str[i] = str[i];
		i++;
	}
	return (ptr_str);
}

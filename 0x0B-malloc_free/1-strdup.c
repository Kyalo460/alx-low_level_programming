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
	unsigned int size, i;

	if (str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		size++;

	ptr_str = malloc(sizeof(char) * (size + 1));

	if (ptr_str == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		ptr_str[i] = str[i];
	}

	ptr_str[size] = '\0';

	return (ptr_str);
}

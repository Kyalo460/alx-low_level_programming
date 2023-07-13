#include "main.h"
#include <stdlib.h>
/**
  *_calloc - allocates memory for an array and intitialises each element to 0
  *@nmemb: amount of elements
  *@size: size of each element
  *
  *Return: return pointer to array if success
  *	   returns NULL on failure
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *arr;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < nmemb; index++)
		arr[index] = '\0';

	return (arr);
}

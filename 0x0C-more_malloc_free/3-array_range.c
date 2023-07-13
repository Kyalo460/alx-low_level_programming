#include "main.h"
#include <stdlib.h>
/**
  *array_range - a function that creates an array of integers
  *@min: first integer
  *@max: last integer
  *
  *Return: returns the array if success
  *        returns NULL if not successfull
  */
int *array_range(int min, int max)
{
	int *arr;
	int index, size;

	if (min > max)
		return (NULL);

	size = (max - min) + 1;

	arr = malloc(sizeof(int) * size);

	if (arr == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		arr[index] = min++;

	return (arr);
}

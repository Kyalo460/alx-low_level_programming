#include "function_pointers.h"
/**
  *int_index - checks elements of an array for conditions
  *@array: array being checked
  *@size: size of array
  *@cmp: points to a function
  *
  *Return: returns index of element if condition is true
  *	   returns (-1) is all elements don't meet conditions
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int index, num;

	for (index = 0; index < size; index++)
	{
		num = array[index];

		if (cmp(num) > 0)
			return (index);
	}

	return (-1);
}

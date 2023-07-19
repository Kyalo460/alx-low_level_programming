#include "function_pointers.h"
/**
  *array_iterator - prints every element in an array
  *@array: expects an array address
  *@size: size of array
  *@action: a function that points to a function
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t index;
	int num = 0;

	if (action == NULL || array == NULL || size == 0)
		return;

	for (index = 0; index < size; index++)
	{
		num = array[index];
		action(num);
	}
}

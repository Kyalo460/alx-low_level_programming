#include "search_algos.h"

/**
 * linear_search - searches for a value in an array of integers using the
 * Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 *
 * Return: first index where value is located, or -1 if value is not present
 *         in array or if array is NULL
*/

int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (size > 1)
	{
		while (index < size)
		{
			printf("Value checked array[%ld] = [%i]\n", index, array[index]);
			if (array[index] == value)
				return (index);

			else
				index++;
		}
	}

	return (-1);
}

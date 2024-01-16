#include "search_algos.h"
#include <math.h>

/**
 * jump_search - uses jump search algorithm to find a value in array
 * @array: the array to search
 * @size: the size of the array
 * @value: the value to search for
 *
 * Return: returns the index of the value if found
 *         returns -1 if not found
*/
int jump_search(int *array, size_t size, int value)
{
	int root;
	size_t start, end, i = 0;

	if (size > 0)
	{
		root = sqrt(size);
		start = 0;
		end = start + root;

		for (i = start; i < size - 1; i++)
		{
			i = start;
			printf("Value checked array[%ld] = [%i]\n", i, array[i]);
			if (array[end])
			{
				if (value <= array[end])
				{
					printf("Value found between indexes [%ld] and [%ld]\n", start, end);
					for (i = start; i <= end; i++)
					{
						printf("Value checked array[%ld] = [%i]\n", i, array[i]);
						if (value == array[i])
							return (i);
					}
					return (-1);
				}
			}
			if (value == array[i])
			{
				printf("Value found between indexes [%ld] and [%ld]\n", start, end);
				return (i);
			}

			if (value >= array[end])
			{
				start = end;
				end = start + root;
			}
		}
	}
	return (-1);
}

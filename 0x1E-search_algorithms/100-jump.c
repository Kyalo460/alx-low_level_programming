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
	size_t start, end, i;

	if (size > 0)
	{
		root = sqrt(size);
		start = 0;
		end = start + (root - 1);

		for (i = start; i < size - 1; i += root)
		{
			if (value < array[end])
			{
				for (i = start; i <= end; i++)
				{
					if (value == array[i])
						return (i);
				}
				return (-1);
			}

			if (value > array[end])
			{
				start = end + 1;
				end = start + (root - 1);
			}

			else
				return (end);
		}
	}
	return (-1);
}

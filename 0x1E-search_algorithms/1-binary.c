#include "search_algos.h"

/**
 * binary_search - finds an integer value in an array
 * @array: a pointer to the array
 * @size: the size of the array
 * @value: the value we are looking for
 * 
 * Return: returns the index of the value if found
 *         return -1 if not found
*/
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0, i;
	size_t end = size - 1;
	size_t mid = start + ((end - start) / 2);

	if (size > 1)
	{
		while (mid >= start && mid <= end)
		{
			printf("Searching in array: ");
			for (i = start; i <= end; i++)
			{
				printf("%i", array[i]);
				if (i != end)
					printf(", ");
			}
			printf("\n");
			if (value > array[mid])
				start = mid + 1;
			
			else if (value < array[mid])
				end = mid - 1;

			else
				return (mid);

			mid = start + ((end - start) / 2);
		}
	}

	return (-1);
}

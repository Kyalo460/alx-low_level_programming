#include "main.h"
#include <stdio.h>
/**
  *print_array - Prints values in an array
  *@a: expects an array of integers
  *@n: the number of elements to be printed
  */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}

#include "main.h"
#include <stdlib.h>
/**
  *powerof - gets the answer to 2 to the power of n
  *@n: the number to raise 2 by
  *
  *Return: returns the answer
  */
unsigned int powerof(int n)
{
	unsigned int ans;

	if (n == 0)
		return (1);

	ans = 2 * powerof(n - 1);
	return (ans);
}
/**
  *binary_to_uint - converts binary to decimal
  *@b: a string of 1s and 0s
  *
  *Return: returns the deciml number (if success)
  *	   returns 0 if theres an error
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0;
	int index = 0;
	int index1 = 0;

	int binary;

	while (b[index])
		index++;
	index--;

	if (b == NULL)
		return (0);

	for (; b[index]; index--)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);

		binary = powerof(index1);
		if (b[index] == '1')
			decimal += binary;
		index1++;
	}

	return (decimal);
}

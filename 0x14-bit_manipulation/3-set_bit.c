#include "main.h"
/**
  *
  */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int copy = *n;

	if (index > 31)
		return (-1);

	copy = (copy >> index);

	copy = (copy | 1);

	copy = (copy << index);

	*n = (*n | copy);

	return (1);
}

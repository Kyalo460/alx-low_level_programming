#include "main.h"
/**
  *set_bit - sets a certain bit to 1 if possible
  *@n: the number to change
  *@index: position of the bit to change
  *
  *Return: 1 (success) -1 (fail)
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

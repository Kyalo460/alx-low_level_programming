#include "main.h"
/**
  *clear_bit - sets bit as index to 0
  *@n: the number to change
  *@index: position to change bit
  *
  *Return: 1 (success) -1 (fail)
  */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 31)
		return (-1);

	*n &= ~(1 << index);

	return (1);
}

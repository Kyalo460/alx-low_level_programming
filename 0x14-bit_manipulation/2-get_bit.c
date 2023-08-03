#include "main.h"
/**
  *get_bit - gets the bit of number at a given index
  *@n: number provided
  *@index: index to get bit
  *
  *Return: returns the bit or -1 if error
  */
int get_bit(unsigned long int n, unsigned int index)
{
	int new_num;

	if (index > 31)
		return (-1);

	new_num = (n >> index);

	new_num = (new_num & 1);

	return (new_num);
}

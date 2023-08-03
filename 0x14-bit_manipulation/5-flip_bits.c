#include "main.h"
/**
  *flip_bits - checks for the number of bits to flip to resemble other number
  *@n: first number
  *@m: second number
  *
  *Return: number of bits
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int xor;
	int bits = 0;

	xor = n ^ m;

	while (xor > 0)
	{
		bits += (xor & 1);
		xor >>= 1;
	}

	return (bits);
}

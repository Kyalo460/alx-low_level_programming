#include "main.h"
/**
  *_memcpy - copies a memory block to dest
  *@dest: a pointer to memory address
  *@src:  a pointer to sourse memory address
  *@n: number of bytes to be copied
  *Return: returns the address where the data is stored
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index;
	char *final = dest;
	const char *source = src;

	for (index = 0; index < n; index++)
		final[index] = source[index];

	return (dest);
}

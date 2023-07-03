#include "main.h"
/**
  *_memset - fills the first n bytes of memory
  *@s: pointer to memory address to be filled
  *@b: The byte to be added
  *@n: Number of bytes to be filled
  *Return: returns the filled memory address
  */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	char *memory = s;
	unsigned char value = b;

	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

#include "main.h"
#include <stdlib.h>
/**
  *malloc_checked - allocates memory using malloc
  *@b: the size to be allocated in bytes
  *
  *Return: returns the ptr is successfull
  *	   or exits with 98 if unsuccessful
  */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
		exit(98);

	return (ptr);
}

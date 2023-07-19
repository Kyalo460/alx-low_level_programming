#ifndef FUNCTION_POINTERS
#define FUNCTION_POINTERS
/**
  *function_pointers.h - will contain function prototypes
  *@name: array
  *@f: pointer to a function
  */
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
void array_iterator(int *array, size_t size, void (*action)(int));
int int_index(int *array, int size, int (*cmp)(int));
#endif

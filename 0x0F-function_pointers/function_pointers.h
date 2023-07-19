#ifndef FUNCTION_POINTERS_H
#define FUNCTION_POINTERS_H
/**
  *Desc: will contain function prototypes
  */
#include <stdlib.h>

void print_name(char *name, void (*f)(char *));
#endif

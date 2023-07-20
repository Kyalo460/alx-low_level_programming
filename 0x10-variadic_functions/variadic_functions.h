#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS
/**
  *variadic_functions.h - will contain function prototypesi and stdarg.h
  *sum_them_all - adds arguments given to variadic function
  *@n: number of variadic argumnets given
  *
  *Return: returns the sum of arguments given
  */
#include <stdarg.h>

int sum_them_all(const unsigned int n, ...);
#endif /* VARIADIC_FUNCTIONS */

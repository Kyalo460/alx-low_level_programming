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
#include <stdio.h>

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
#endif /* VARIADIC_FUNCTIONS */

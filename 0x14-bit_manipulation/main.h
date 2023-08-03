#ifndef MAIN_H
#define MAIN_H
#include <unistd.h>
/**
  *main.h - will contain function prototypes
  *binary_to_int - converts binary number to decimal number
  *@b: a string of 0s and 1s
  *Return: returns converted number if success
  */
unsigned int binary_to_uint(const char *b);
int _putchar(char);
void print_binary(unsigned long int n);
int get_bit(unsigned long int n, unsigned int index);
int set_bit(unsigned long int *n, unsigned int index);
#endif /* MAIN_H */

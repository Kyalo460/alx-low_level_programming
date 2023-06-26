#include "main.h"
/**
  *swap_int - swaps int value of the first variable to the second
  * and viseversa when called in the main function
  *@a: is a pointer expecting an address
  *@b: is a pointer expecting an address
  */
void swap_int(int *a, int *b)
{
	int sub = *a;
	*a = *b;
	*b = sub;
}

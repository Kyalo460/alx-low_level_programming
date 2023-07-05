#include "main.h"
/**
  *factorial - returns the factorial value of n
  *@n: integer to calculate on
  *Return: returns the answer if n is greater than 0
  */
int factorial(int n)
{
	int m;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);

	m = n * factorial(n - 1);

	return (m);
}

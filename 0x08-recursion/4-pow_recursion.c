#include "main.h"
/**
  *_pow_recursion - returns the value of x raised to the power of y
  *@x: the integer to be raised
  *@y: the power
  *Return: the value of x raised to the power y
  */
int _pow_recursion(int x, int y)
{
	int answer;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	answer = x * _pow_recursion(x, y - 1);

	return (answer);
}

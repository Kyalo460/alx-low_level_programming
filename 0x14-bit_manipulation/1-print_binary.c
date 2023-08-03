#include "main.h"
/**
  *powerof - gets the answer to 2 raise to x
  *@x: number to raise by
  *
  *Return: returns the answer
  */
unsigned int powerof(int x)
{
	unsigned int ans;

	if (x == 0)
		return (1);

	ans = 2 * powerof(x - 1);
	return (ans);
}
/**
  *findstart - finds the largest exponential number to start with
  *@x: index
  *@n: the number provided
  *@expo: 2 raised to x
  *
  *Return: returns the largest index
  */
int findstart(int x, unsigned long int n, unsigned int expo)
{
	for (x = 0; expo <= n; x++)
	{
		expo = powerof(x);
		if (expo > n)
		{
			x--;
			break;
		}
	}
	return (x);
}
/**
  *print_binary - prints numbers in binary form
  *@n: number to convert
  */
void print_binary(unsigned long int n)
{
	int x = 0;
	unsigned int expo = 0;

	if (n == 0)
	{
		_putchar ('0');
		return;
	}

	x = findstart(x, n, expo);

	while (x >= 0)
	{
		expo = powerof(x);
		if (expo <= n)
		{
			n = n - expo;
			_putchar('1');
			x--;
		}
		else
		{
			_putchar('0');
			x--;
		}
	}
}

#include "main.h"
/**
  *print_last_digit - prints last digit
  *@n: holds the number
  *Return: returns the last digit
  */
int print_last_digit(int n)
{
	int lastdig = n % 10;

	if (lastdig < 0)
		lastdig *= -1;

	_putchar(lastdig + '0');
	return (lastdig);
}

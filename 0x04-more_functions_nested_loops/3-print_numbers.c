#include "main.h"
/**
  *print_numbers - a funtion that rans a loop that prints 0 to 9
  */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar(num + '0');
	_putchar('\n');
}

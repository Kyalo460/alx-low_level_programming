#include "main.h"
/**
  *print_line - prints the character '_' n amount of times
  *@n: expects an integer value
  */
void print_line(int n)
{
	int j;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
			_putchar('_');
	}
	_putchar('\n');
}

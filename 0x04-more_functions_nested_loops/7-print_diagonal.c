#include "main.h"
/**
  *print_diagonal - prints a diagonal line
  *@n: expects an integer
  */
void print_diagonal(int n)
{
	int line, space;

	if (n > 0)
	{
		for (line = 0; line < n; line++)
		{
			for (space = 0; space < line; space++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

#include "main.h"
/**
  *print_alphabet_x10 - prints the alphabet 10 times
  *
  *count: makes it possible to repeat the loop
  */
void print_alphabet_x10(void)
{
	int count = 0;

	char a;

	while (count++ <=9)
	{
		for (a = 'a'; a = 'z'; a++)
			_putchar(a);
		_putchar('\n');
	}
}

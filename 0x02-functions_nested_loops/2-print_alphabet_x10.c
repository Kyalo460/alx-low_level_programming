#include "main.h"
/**
  *print_alphabet_x10 - prints alphabet ten times
  */
void print_alphabet_x10(void)
{
	int times;
	char letter;

	for (times = 0; times < 10; times++)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
		{
			_putchar(letter);
		}
		_putchar('\n');
	}
}

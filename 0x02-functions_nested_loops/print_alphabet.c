#include "main.h"
#include <stdio.h>
/**
  *print_alphabet - A program that prints the alphabet in lowercase
  *_putchar - puts a the char c to stdout
  */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
	{
		_putchar(letter);
	}
	_putchar('\n');
}

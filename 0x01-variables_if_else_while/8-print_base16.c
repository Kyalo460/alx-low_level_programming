#include <stdio.h>
/**
  *main - a program that prints 0..9 then A..F to represent hexadecimal
  *Return:0 (success)
  */
int main(void)
{
	int number;
	char letter;

	for (number = 0; number <= 9; number++)
		putchar(number + '0');
	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}

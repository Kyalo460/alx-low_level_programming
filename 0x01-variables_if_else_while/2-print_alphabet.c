#include <stdio.h>
/**
  *main - A program that prints the alphabet
  *Return:0 (Success)
  */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}

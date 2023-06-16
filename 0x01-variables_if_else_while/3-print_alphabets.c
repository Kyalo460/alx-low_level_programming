#include <stdio.h>
/**
  *main - A program that prints the alphabet in lower and uppercase
  *Return: 0 (Success)
  */
int main(void)
{
	char letter1;
	char letter2;

	for (letter1 = 'a'; letter1 <= 'z'; letter1++)
		putchar(letter1);

	for (letter2 = 'A'; letter2 <= 'Z'; letter2++)
		putchar(letter2);
	putchar('\n');
	return (0);
}

#include <stdio.h>
/**
  *main - a program that uses type in and putchar
  *Return:0 (Success)
  */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		putchar(number + '0');
	putchar('\n');
	return (0);
}

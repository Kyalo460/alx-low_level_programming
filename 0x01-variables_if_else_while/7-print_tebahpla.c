#include <stdio.h>
/**
  *main - Prints the alphabet in reverse order
  *Return:0 (success)
  */
int main(void)
{
	char letter = 'z';

	for ( ; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n');
	return (0);
}

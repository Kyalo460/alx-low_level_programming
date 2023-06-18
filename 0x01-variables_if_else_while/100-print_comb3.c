#include <stdio.h>
/**
  *main - print possible combinations of different one digit numbers
  *Return: 0 (Success)
  */
int main(void)
{
	int dig1;
	int dig2;

	for (dig1 = 0; dig1 <= 8; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= 9; dig2++)
		{
			putchar(dig1 + '0');
			putchar(dig2 + '0');

			if (dig1 == 8 && dig2 == 9)
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

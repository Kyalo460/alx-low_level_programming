#include <stdio.h>
/**
  *main - a program that prints combinations of 3 different single digits
  *Return:0 (Success)
  */
int main(void)
{
	int dig1, dig2, dig3;

	for (dig1 = 0; dig1 <= 7; dig1++)
	{
		for (dig2 = dig1 + 1; dig2 <= 8; dig2++)
		{
			for (dig3 = dig2 + 1; dig3 <= 9; dig3++)
			{
				putchar(dig1 + '0');
				putchar(dig2 + '0');
				putchar(dig3 + '0');

				if (dig1 == 7 && dig2 == 8 && dig3 == 9)
					continue;

				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

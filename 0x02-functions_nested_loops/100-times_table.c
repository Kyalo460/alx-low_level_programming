#include "main.h"
/**
  *print_times_table - prints the times table up to number 15
  *@n: replaces n with the number used when calling the function
  */
void print_times_table(int n)
{
	int num, mult, prod;

	if (n <= 15 && n >= 0)
	{
		for (num = 0; num <= n; num++)
		{
			_putchar('0');

			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				prod = num * mult;

				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(prod + '0');
				}
				else if (prod <= 99)
				{
					_putchar(' ');
					_putchar((prod / 10) + '0');
					_putchar((prod % 10) + '0');
				}
				else if (prod > 99)
				{
					_putchar((prod / 100) + '0');
					_putchar((prod / 10) % 10 + '0');
					_putchar((prod % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}

#include "variadic_functions.h"
/**
  *print_numbers - prints numbers given as variadic arguments
  *@separator: string to use to separate values
  *@n: number of variadic arguments
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0;
	int num;
	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		num = va_arg(args, int);

		printf("%d", num);
		if (!(separator == NULL))
		{
			if (j < (n - 1))
			{
				printf("%s", separator);
				j++;
			}
		}
	}
	printf("\n");
}

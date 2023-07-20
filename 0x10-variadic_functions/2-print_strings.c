#include "variadic_functions.h"
/**
  *print_strings - prints the variadic arguments given as strings
  *@separator: string of separators to use
  *@n: number of variadic arguments
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i, j = 0;
	char *string;

	va_list args;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(args, char *);

		if (string == NULL)
			string = "(nil)";

		printf("%s", string);

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

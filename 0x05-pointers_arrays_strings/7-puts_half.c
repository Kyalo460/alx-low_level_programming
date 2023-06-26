#include "main.h"
/**
  *puts_half - prints half of a string
  *@str: expects a string
  */
void puts_half(char *str)
{
	int index, n, length;

	for (index = 0; str[index] != '\0'; index++)
		length++;

	n = (length / 2);

	if ((length % 2) == 1)
		n = ((length + 1) / 2);

	for (index = n; str[index] != '\0'; index++)
		_putchar(str[index]);
	_putchar('\n');
}

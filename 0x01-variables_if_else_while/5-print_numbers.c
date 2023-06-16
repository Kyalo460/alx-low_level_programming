#include <stdio.h>
/**
  *main - Program that prints 0..9
  *Return: 0 (Success)
  */
int main(void)
{
	int number;

	for (number = 0; number < 10; number++)
		printf("%d", number);
	printf("\n");
	return (0);
}


#include <stdio.h>
/**
  *main - A program that print 1 to 100 but replaces the number with
  *Fizz if it is divisible by 3
  *Buzz if it is divisible by 5
  *FizzBuzz if it is diviscible by both
  */
int main() 
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		else if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
	}
	putchar('\n');
	return 0;
}

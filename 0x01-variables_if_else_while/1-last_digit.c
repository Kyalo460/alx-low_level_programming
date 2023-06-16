#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
  *main - Enrty point
  *Return:0 (success)
  */
int main(void)
{
	int n;
	int lastdig;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	/*Negative numbers*/
	if (n < 0)
	{
		lastdig = n % 10;

		if (lastdig != 0)
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
		else
			printf("Last digit of %d is 0 and is 0\n", n);
	}
	/*Number 0*/
	else if (n == 0)
	{
		printf("Last digit of %d is 0 and is 0", n);
	}
	/*Positive numbers*/
	else
	{
		lastdig = (n % 10);

		if ((lastdig < 6) && (lastdig != 0))
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, lastdig);
		}
		else if (lastdig > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, lastdig);
		}
	}
	return (0);
}

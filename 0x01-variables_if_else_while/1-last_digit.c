#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/* more headers goes there */

/**
  *main - Entry point
  *Return: Always 0 (Success)
  */
int main(void)
{
	int n;
	int lastDigit;
	srand(time(0));
	n= rand() - RAND_MAX / 2;

	lastDigit = n % 10;
	printf("Last Digit of %d ", n); 
	
		if (lastDigit > 5)
		{
			printf(" is %d ", lastDigit);

		}
		else if (n == 0)
		{
			printf(" is %d ", lastDigit, "and is 0");
		}
		else if ((n < 6)&&(n =! 0))
		{
			printf(" is %d ", lastDigit, "and is less than 6 and not 0");
		}
		else
		{
			printf("Last digit is greater than 6");
		}
		return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*more headers go there*/

/**
  *main - Entry point
  *rand - makes random number
  *Return: Always 0 (Success) 
  */
int main(void)
{
	int n;
	rand();
	
	srand(time(0));
	n = rand() - RAND_MAX /2;

	printf("%d", n);

	if (n > 0)
	{
		printf(" is positive");
	}
	else 
	{
		printf(" is negative") ;  
	}
	
	return (0); 
}

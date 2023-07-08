#include <stdio.h>
#include <stdlib.h>

int coins(int cents)
{
	int n = 0;

	if (cents == 0)
	{
		return (n);
	}
	else
	{
		if (cents >= 25)
		{
			cents -= 25;
			n = 1 + coins(cents);
		}
		else if (cents >= 10)
		{
			cents -= 10;
			n = 1 + coins(cents);
		}
		else if (cents >= 5)
		{
			cents -= 5;
			n = 1 + coins(cents);
		}
		else if (cents >= 2)
		{
			cents -= 2;
			n = 1 + coins(cents);
		}
		else if (cents == 1)
		{
			cents--;
			n = 1 + coins(cents);
		}
	}
	return (n);
}
/**
  *
  */
int main(int argc, char *argv[])
{
	int cents;
	int num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return(1);
	}
	cents = atoi(argv[1]);
	num_coins = coins(cents);

	printf("%d\n", num_coins);
	return (0);
}

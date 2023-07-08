#include <stdio.h>
#include <stdlib.h>
/**
  *coins - determines the least amounts of coins needed
  *@cents: amount of change to be given back
  *Return: amount of coins needed
  */
int coins(int cents)
{
	int i = 0, total = 0;  /* i for index */
	int n[5] = {25, 10, 5, 2, 1};

	for (; i < 5 && cents > 0; i++)
	{
		while (cents >= n[i])
		{
			cents -= n[i];
			total++;
		}
	}
	return (total);
}
/**
  *main - determines amount of coins to give
  *@argc: argument count
  *@argv: argument vector
  *Return: (0) successful execution
  */
int main(int argc, char *argv[])
{
	int cents;
	int num_coins;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	num_coins = coins(cents);

	printf("%d\n", num_coins);
	return (0);
}

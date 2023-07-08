#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
/**
  *check_num - a function that checks if a string is a valid number
  *@str: expects a string value
  *Return: returns true or false to the main program
  */
bool check_num(char *str)
{
	while (*str != 0)
	{
		if (!isdigit(*str++))
			return (false);
		else
			return (true);
	}

	return (0);

}

/**
  *main - prints sum of argument numbers
  *@argc: argument count
  *@argv: argument vector
  *Return: (0) if success
  */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (check_num(argv[i]) == true)
			sum = sum + atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (0);
		}
	}
	printf("%d\n", sum);
	return (0);
}

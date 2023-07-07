#include <stdio.h>
#include <stdlib.h>
/**
  *main - prints product of two integers
  *@argc: argument count
  *@argv: argument vector
  *Return: (0) if successful
  */
int main(int argc, char *argv[])
{
	int prod, a, b;

	if (argc < 3)
		printf("Error\n");
	else
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		prod = a * b;

		printf("%d\n", prod);
	}
	return (0);
}

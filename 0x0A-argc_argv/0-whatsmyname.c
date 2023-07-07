#include <stdio.h>
/**
  *main - prints name of program
  *@argc: arguments count
  *@argv: arguments vector
  *Return: (0) success
  */
int main(int argc, char *argv[])
{
	if (argc == 1)
		printf("%s\n", argv[0]);

	return (0);
}

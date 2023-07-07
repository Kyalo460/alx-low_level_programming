#include <stdio.h>
/**
  *main - prints number of atguments used excluding file name
  *@argc: arguments count
  *@argv: argument vector
  *Return: (0) if success
  */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc -1);

	return (0);
}

#include <stdio.h>
/**
  *main - prints the file that the program was compiled from
  *
  *Return: 0 (on success)
  */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}

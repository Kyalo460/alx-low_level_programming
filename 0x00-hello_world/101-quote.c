#include<unistd.h>
/**
  *main - entry point for code
  *Return: 1 (success)
  */
int main(void)
{
	char *line1 = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, line1, strlen(line1));

	return (1);
}

#include <stdio.h>
/**
  *main - ENtry point
  *
  *Return: Always 0 (Success)
  */
int main(void)
{
	int ch;
	
	for (ch = 'a'; ch < 'e'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'f'; ch < 'q'; ch++)
	{
		putchar(ch);
	}
	for (ch = 'r'; ch <= 'z'; ch++)
	{
		putchar(ch);
		putchar('\n');
	}
	return (0);
}
		

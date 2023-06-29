#include "main.h"
/**
  *_strncpy - copies src to dest
  *@dest: where the string will be copied
  *@src: what to copy to dest
  *@n: dictates how many characters will be copied
  *Return: returns address of the strat of the dest
  */
char *_strncpy(char *dest, char *src, int n)
{
	int i;
	char *start = dest;

	for (i = 0; i < n && *src != '\0'; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}
	for (; i < n; i++)
	{
		*dest = '\0';
		dest++;
	}
	return (start);
}

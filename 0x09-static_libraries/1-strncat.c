#include "main.h"
/**
  *_strncat - appends src to dest n amount of times
  *@dest: string to be appended to
  *@src: string to append to dest
  *@n: dictates the number of characters to be added to dest
  *Return: returns the address of the start of the string
  */
char *_strncat(char *dest, char *src, int n)
{
	int i;
	char *start = dest;

	while (*dest != '\0')
		dest++;

	for (i = 0; i < n; i++)
	{
		if (*src == '\0')
			continue;
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}

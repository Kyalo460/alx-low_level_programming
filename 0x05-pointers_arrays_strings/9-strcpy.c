#include "main.h"
/**
  *_strcpy - copies a string pointed to by @src
  *@dest: A buffer to copy the string to
  *@src: the source string to copy
  *Return: a pointer to the destination string @dest.
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
		i++;
	for(; x < i; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}

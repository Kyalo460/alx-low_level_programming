#include "main.h"
/**
  *_strcat - concatenates two strings
  *@dest: the string to be added to
  *@src: the string to add to dest
  *Return: return the final string after concatenation
  */
char *_strcat(char *dest, char *src)
{
	char *start =  dest;

	while (*dest != '\0')
		dest++;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}

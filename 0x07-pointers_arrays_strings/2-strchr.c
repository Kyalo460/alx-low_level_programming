#include "main.h"
/**
  *_strchr - returns a pointer to the first occurence of a letter
  *@s: string being checked
  *@c: character being searched for
  *Return: returns the address of the firs occurence of the character
  */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
			continue;
		}
		s++;
	}
	return (s);
}

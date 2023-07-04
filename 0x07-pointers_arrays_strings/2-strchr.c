#include "main.h"
/**
  *_strchr - returns a pointer to the first occurrence of a letter
  *@s: string being checked
  *@c: character being searched for
  *Return: returns the address of the first occurrence of the character
  */
char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}

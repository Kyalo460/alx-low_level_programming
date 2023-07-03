#include "main.h"
/**
  *_strpbrk -  searches a string for matching characters in accept
  *@s: string to be searched
  *@accept: characters to search for
  *Return: returns the address wher the string matches @accept
  */
char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}

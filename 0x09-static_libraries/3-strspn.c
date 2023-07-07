#include "main.h"
/**
  *_strspn - shows how many characters in @s exist is @accept
  *@s: string being checked
  *@accept: contains list of characters to check for
  *Return: returns the number of characters that are present
  *        before they stop being present
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int bytes = 0;
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
			{
				bytes++;
				break;
			}

			else if (accept[index + 1] == '\0')
				return (bytes);
		}
		s++;
	}
	return (bytes);
}

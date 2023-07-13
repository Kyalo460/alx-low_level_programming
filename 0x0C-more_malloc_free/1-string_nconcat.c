#include "main.h"
#include <stdlib.h>
/**
  *string_nconcat - concatenates two strings s1 + s2
  *@s1: First string
  *@s2: second string
  *@n: number of bytes to add from second string
  *
  *Return: returns the pointer to concatenated string on success
  *	   returns NULL if malloc was not successfull
  */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *newstr;
	unsigned int index, index2 = 0;
	unsigned int len = n;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		len++;

	newstr = malloc(sizeof(char) * (len + 1));

	if (newstr == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		newstr[index2++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		newstr[index2++] = s2[index];

	newstr[index2] = '\0';

	return (newstr);
}

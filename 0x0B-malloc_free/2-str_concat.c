#include "main.h"
#include <stdlib.h>
/**
  *str_concat - concatenates two string in a new memory location
  *@s1: expects first string
  *@s2: expects second string
  *Return: returns the address of new memory location if successful
  */
char *str_concat(char *s1, char *s2)
{
	int len = 0, index, index2 = 0;
	char *concat;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = ""

	for (index = 0; s1[index] != '\0'; index++)
		len++;

	for (index = 0; s2[index] != '\0'; index++)
		len++;

	concat = malloc(sizeof(char) * (len + 1));

	if (concat == NULL)
		return (NULL);

	for (index = 0; s1[index]; index++)
		concat[index2++] = s1[index];


	for (index = 0 ; s2[index]; index++)
		concat[index2++] = s2[index];

	concat[len] = '\0';

	return (concat);
}

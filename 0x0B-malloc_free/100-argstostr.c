#include "main.h"
#include <stdlib.h>
/**
  *
  */
char *argstostr(int ac, char **av)
{
	char *newstr;
	int i;

	if (ac == 0 || av == NULL)
		return (NULL);

	newstr = malloc(sizeof(char *) * (ac - 1));

	for (i = 0; i < (ac - 1); i++)
	{
		newstr[i] = malloc(sizeof(char *)

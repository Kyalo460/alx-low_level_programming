#include "main.h"
/**
  *_strlen_recursion - gives the length of a string
  *@s: the string literal
  *Return: returns the length of the string
  */
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len += _strlen_recursion(s + 1);
	}
	return (len);
}

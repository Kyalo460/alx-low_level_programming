#include "main.h"
/**
  *_isalpha - Checks if a character is alphabetic
  *@c: The character to be checked
  *Return: Always 0 (Success)
  */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

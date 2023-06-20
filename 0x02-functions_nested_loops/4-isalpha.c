#include "main.h"
/**
  *_isalpha - returns 1 if alphabetic ) otherwise
  *@c: stores character
  *Return: 1 if condition is true
  */
int _isalpha(int c)
{
	if ((c <= 122 && c >= 97) || (c <= 90 && c >= 65))
		return (1);
	else
		return (0);
}

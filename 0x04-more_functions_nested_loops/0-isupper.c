#include "main.h"
/**
  *_isupper - A function that checks if a letter is uppercase
  *@c - expects an int datatype
  */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}

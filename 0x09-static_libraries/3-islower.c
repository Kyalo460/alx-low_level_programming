#include "main.h"
/**
  *_islower - outputs 1 if character is lowercase and 0 if not
  *Return: 0 if success
  *@c: The character to print
  */
int _islower(int c)
{
	if (c <= 122 && c >= 97)
		return (1);
	else
		return (0);
}

#include "main.h"
/**
  *_islower - Looks if a char is lowercase
  *
  *Return: Always 0 (Success)
  */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}

#include "main.h"
/**
  *_abs - prints the absolute vaue of an integer
  *@digit: expects integer
  *Return: 0 (success)
  */
int _abs(int digit)
{

	if (digit < 0)
	{
		return (-digit);
	}
	else
	{
		return (digit);
	}
}

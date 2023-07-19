#include "function_pointers.h"
/**
  *print_name - prints a name
  *@name: expects an name
  *@f: pointer to function that prints a name
  *
  *Description: receives an array then uses a pointer to function to
  *call a function that prints the name
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}

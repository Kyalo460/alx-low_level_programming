#include "function_pointers.h"
/**
  *print_name - prints a name
  *@name: expects an name
  *@f: pointer to function that prints a name
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		exit(1);

	(*f)(name);
}

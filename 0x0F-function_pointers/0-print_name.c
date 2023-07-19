#include "function_pointers.h"
/**
  *print_name - contains pointer to function
  *@name: expects an name
  *@f: pointer to function
  */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	(*f)(name);
}

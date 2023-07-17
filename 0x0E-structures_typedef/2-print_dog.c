#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
  *print_dog - prints the contents of an object in a certain format
  *@d: pointer to object location
  */
void print_dog(struct dog *d)
{
	if (d == NULL)
		return;

	if ((*d).name == NULL)
		(*d).name = "(nil)";

	if (d->owner == NULL)
		d->owner = "(nil)";

	printf("Name: %s\nAge: %d\nOwner: %s\n", d->name, d->age, d->owner);
}

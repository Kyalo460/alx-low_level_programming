#include "dog.h"
#include <stdlib.h>

int _strlen(char *str);
char *_strcopy(char *dest, char *src);
/**
  *_strlen - gets the length of string
  *@str: expects a string
  *
  *Return: returns the length
  */
int _strlen(char *str)
{
	int len = 0, index;

	for (index = 0; str[index]; index++)
		len++;

	return (len);
}
/**
  *_strcopy - copies @src to @dest
  *@dest: buffer
  *@src: source string
  *
  *Return: returns a pointer to the copied string
  */
char *_strcopy(char *dest, char *src)
{
	int index;

	for (index = 0; src[index]; index++)
		dest[index] = src[index];

	dest[index] = '\0';

	return (dest);
}
/**
  *new_dog - creates a new instance
  *@name: name of the dog
  *@age: its age
  *@owner: the dog's owner
  *
  *Return: returns new instance dog2
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog2;

	if (name == NULL || age < 0 || owner == NULL)
		return (NULL);

	dog2 = malloc(sizeof(dog2));

	if (dog2 == NULL)
		return (NULL);

	dog2->name = malloc(sizeof(char) * (_strlen(name) + 1));
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}

	dog2->owner = malloc(sizeof(char) * (_strlen(owner) + 1));
	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}

	dog2->name = _strcopy(dog2->name, name);
	dog2->age = age;
	dog2->owner = _strcopy(dog2->owner, owner);

	return (dog2);
}

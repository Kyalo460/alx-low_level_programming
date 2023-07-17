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
	int len = 0;

	while (str[len] != '\0')
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
	int index, len = 0;

	while (src[len] != '\0')
		len++;

	for (index = 0; index < len; index++)
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
	int len1, len2;

	len1 = _strlen(name);
	len2 = _strlen(owner);

	dog2 = malloc(sizeof(dog_t));

	if (dog2 == NULL)
		return (NULL);

	dog2->name = malloc(sizeof(char) * (len1 + 1));
	if (dog2->name == NULL)
	{
		free(dog2);
		return (NULL);
	}

	dog2->owner = malloc(sizeof(char) * (len2 + 1));
	if (dog2->owner == NULL)
	{
		free(dog2->name);
		free(dog2);
		return (NULL);
	}

	_strcopy(dog2->name, name);
	dog2->age = age;
	_strcopy(dog2->owner, owner);

	return (dog2);
}

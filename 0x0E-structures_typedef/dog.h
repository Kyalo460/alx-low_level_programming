#ifndef DOG_H
#define DOG_H
/**
  *struct dog - contains details of a dog + owner
  *@name: name of the dog
  *@age: dog's age
  *@owner: owner's name
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
#endif /* DOG_H */

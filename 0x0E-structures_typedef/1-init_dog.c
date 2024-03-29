#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes dog structure
  * @d: dog structure.
  * @name: name of dog.
  * @age: age of dog.
  * @owner: owner of dog.
  *
  * Return: 0
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

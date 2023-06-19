#include "dog.h"
#include <stdlib.h>
/**
  * init_dog - Initializes a varaiable of type dog
  * @d: the structure
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
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

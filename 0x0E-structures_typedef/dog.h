#ifndef DOG_H
#define DOG_H

#include <stdio.h>
/**
  * struct dog - A structure representing a dog
  * @name: Dog's name
  * @age: Dog's age
  * @owner: Dog's owner
  *
  * Description: The dog structure has 3 members
  */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
#endif/*DOG_H*/

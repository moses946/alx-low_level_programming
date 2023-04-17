#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
  * _strcpy - copies source string to dest string
  * @dest: Destination
  * @src: source
  */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*ptr++ = *src++;
	}
	*ptr = '\0';
	return (dest);
}
/**
  * _strlen - Returns length of a string
  * @s: string evaluated
  * Return: Length of string
  */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{}
	return (i);
}
/**
  * new_dog - creates a new dog
  * @name: name of dog
  * @age: age of dog
  * @owner: owner of dog
  * Return: new struct
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dogg;

	dogg = malloc(sizeof(dog_t));
	if (dogg == NULL)
		return (NULL);
	dogg->name = malloc(1 + _strlen(name));
	if (dogg->name == NULL)
		return (NULL);
	_strcpy(dogg->name, name);
	dogg->owner = malloc(1 + _strlen(owner));
	if (dogg->owner == NULL)
		return (NULL);
	_strcpy(dogg->owner, owner);
	dogg->age = age;
	return (dogg);
}

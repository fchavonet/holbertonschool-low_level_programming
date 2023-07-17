#include <stdio.h>
#include <stdlib.h>

#include "dog.h"

/**
 * new_dog - 
 *
 * @name:
 * @age:
 * @owner:
 *
 * Return:
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return(NULL);
	}

	if (name == NULL || owner == NULL)
	{
		return(NULL);
	}

	if (owner == NULL)

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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
	int size_name = 0;
	int size_owner = 0;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
	{
		return(NULL);
	}

	/* malloc and copy of name */

	while(name[size_name] != '\0')
	{
		size_name++;
	}

	dog->name = malloc(sizeof(char) * (size_name + 1));

	if (dog->name == NULL)
	{
		free(dog);
		return(NULL);
	}

	strcpy(dog->name, name);

	/* malloc and copy of owner */

	while(owner[size_owner] != '\0')
	{
		size_owner++;
	}

	dog->owner = malloc(sizeof(char) * (size_owner + 1));

	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return(NULL);
	}

	strcpy(dog->owner, owner);

	dog->age = age;

	return (dog);
}

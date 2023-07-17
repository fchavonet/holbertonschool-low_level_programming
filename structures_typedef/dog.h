#ifndef DOG_H
#define DOG_H

/**
 * struct dog - information about a dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog
 *
 * Description: variable with name, age and owner of a dog
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;
};

#endif

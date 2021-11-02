#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * *new_dog - function that print dog informations
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0 (Success)
 */

dog_t *new_dog(char *name, float age, char *owner)
{

	char *name_copy, *owner_copy;

	dog_t *new_dog;

	name_copy = strdup(name);
	*name_copy = *name;
	owner_copy = strdup(owner);
	*owner_copy = *owner;

	new_dog = malloc(sizeof(dog_t));

	if (new_dog == NULL)
		return (NULL);
	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;

	return (new_dog);

}

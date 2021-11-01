#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * init_dog - function
 * @d: struct
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 * Return: Always 0 (Success)
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{

	if (d == NULL)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;

}

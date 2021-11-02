#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * print_dog - function that print dog informations
 * @d: dog structure
 * Return: Always 0 (Success)
 */

void print_dog(struct dog *d)
{

	if (d == NULL)
		return;

	if (d->name == NULL)
		printf("nil\n");
	printf("Name: %s\n", d->name);

	if (d->age < 0)
		printf("nil\n");
	printf("Age: %f\n", d->age);

	if (d->owner == NULL)
		printf("nil\n");
	printf("Owner: %s\n", d->owner);

}

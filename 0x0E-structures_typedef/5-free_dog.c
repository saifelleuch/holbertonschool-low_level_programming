#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * free_dog - function that free dog structure
 * @d: dog structure
 * Return: Always 0 (Success)
 */

void free_dog(dog_t *d)
{

	free(d);

}

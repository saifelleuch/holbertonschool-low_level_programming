#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - function that create array
 * @b: size of the malloc
 * Return: Always 0 (Success)
 */

void *malloc_checked(unsigned int b)
{
	void *p = malloc(b);

	if (p == NULL)
		exit(98);

	return (p);

}

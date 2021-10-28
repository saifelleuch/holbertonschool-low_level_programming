#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_realloc - function that create array
 * @ptr: the old array
 * @old_size: the size of the old array
 * @new_size: the size of the new array
 * Return: Always 0 (Success)
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{

	char *new;
	char *oldptr = ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size > old_size)
		new_size == old_size;

	if (ptr == NULL)
	{
		new = malloc(new_size);
		return (new);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new = malloc(new_size);

	if (new == NULL)
		return (NULL);

	for (i = 0; i < new_size ; i++)
		new[i] = oldptr[i];

	free(ptr);

	return (new);

}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *_calloc - function that create array
 * @size: size of the array
 * @nmemb: char
 * Return: Always 0 (Success)
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{

	char *arr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);

	for (i = 0; i < (nmemb * size); i++)
		arr[i] = 0;

	return (arr);


}

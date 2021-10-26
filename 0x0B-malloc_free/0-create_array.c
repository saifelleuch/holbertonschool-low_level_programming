#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *create_array - function that create array
 * @size: size of the array
 * @c: char
 * Return: Always 0 (Success)
 */

char *create_array(unsigned int size, char c)
{

	char *arr;
	unsigned int i;

	arr = malloc(size * sizeof(char));

	if (arr == NULL)
		return (NULL);

	i = 0;
	while (i < size)
	{
		arr[i] = c;
		i++;
	}

	if (size == 0)
		return (NULL);

	return (arr);

}

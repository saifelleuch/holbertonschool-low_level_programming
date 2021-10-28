#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range- function that create array
 * @min: size of the array
 * @max: char
 * Return: Always 0 (Success)
 */


int *array_range(int min, int max)
{

	int *arr;
	int i;

	arr = malloc(sizeof(int) * max);

	for (i = 0; i <= max; i++)
	{
		arr[i] = min;
		min++;
	}

	if (arr == NULL)
		return (NULL);

	if (min > max)
		return (NULL);

	return (arr);

}

#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * *array_range- function that create array
 * @min: the minimum
 * @max: the maximum
 * Return: Always 0 (Success)
 */


int *array_range(int min, int max)
{

	int *arr;
	int i, len;

	if (min > max)
		return (NULL);
	len = max - min + 1;

	arr = malloc(sizeof(int) * len);
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
	{
		arr[i] = min;
		min++;
	}

	return (arr);

}

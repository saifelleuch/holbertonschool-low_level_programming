#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * **alloc_grid - function that create array
 * @width: widht of the array
 * @height: height of the array
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{

	int **arr;
	int i;

	if (width == 0 || height == 0)
		return (NULL);

	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}


	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			for (; i >= 0; i--)
			{
				free(arr[i]);
			}
			free(arr);
			return (NULL);
		}

	}

	return (arr);

}

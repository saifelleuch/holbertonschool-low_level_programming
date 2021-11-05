#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "function_pointers.h"

/**
 * array_iterator - function that print the name
 * @array: the array
 * @size: the size of the array
 * @action: action function
 * Return: Always 0 (Success)
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	unsigned long int i;

	if (array != NULL && action != NULL)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);

		}
	}

}

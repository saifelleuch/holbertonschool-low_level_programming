#include <stdio.h>
#include "main.h"

/**
 * reverse_array - Entry point
 * @a: array
 * @n: n is the number of elements of the array
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{

	int b[100];
	int i;

	i = 0;
	while (i < n)
	{
		b[n - 1 - i] = a[i];
		i++;
	}
	i = 0;
	while (i < n)
	{
		a[i] = b[i];
		i++;
	}

}

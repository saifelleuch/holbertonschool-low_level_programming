#include <stdio.h>
#include "main.h"

/**
 * print_array - Entry point
 * @a: pointer
 * @n: variable
 * Return: Always 0 (Success)
 */

void print_array(int *a, int n)
{
	int i;

	i = n;
	for (n = 0; (n + 1) < i; n++)
	{
		printf("%d, ", a[n]);
	}
	printf("%d", a[i - 1]);
	printf("\n");
}

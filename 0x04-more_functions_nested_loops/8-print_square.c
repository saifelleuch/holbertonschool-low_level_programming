#include <stdio.h>
#include "main.h"

/**
 * print_square - Entry point
 * @size: variable to check
 *
 * Return: Always 0 (Success)
 */

void print_square(int size)
{
	int i = 0, j;

	while (i < size)
	{
		j = 0;
		while (j < size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
	if (size <= 0)
	_putchar('\n');
}

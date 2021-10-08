#include <stdio.h>
#include "main.h"

/**
 * print_diagonal - Entry point
 * @n: check variable
 * Return: Always 0 (Success)
 */

void print_diagonal(int n)
{
	int i = 0, j;

	while (i < n)
	{
		j = 0;
		while (j <= i)
		{
		if (j == i)
		_putchar('\\');
		else
		_putchar(' ');
		j++;
		}
		i++;
		_putchar('\n');
	}
	if (n <= 0)
	_putchar('\n');
}

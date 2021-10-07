#include <stdio.h>
#include "main.h"

/**
 * print_line - Entry point
 * @n: check variable
 * Return: Always 0 (Success)
 */

void print_line(int n)
{
	int i = 1;

	while (i <= n)
	{
	_putchar('_');
	if (n <= 0)
	break;
	i++;
	}
	_putchar('\n');

}

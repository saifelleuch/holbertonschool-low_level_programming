#include <stdio.h>
#include "main.h"

/**
 * times_table - Entry point
 *
 * Return: Always 0 (Success)
 */

void times_table(void)
{
	int i, j, o;

	for (i = 0; i < 10; i++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (j = 1; j < 10; j++)
		{

		o = i * j;
		if (o > 9)
		{
		_putchar((o / 10) + '0');
		_putchar((o % 10) + '0');
		}
		else
		{
		_putchar(' ');
		_putchar(o + '0');
		}
		if (j < 9)
		{
		_putchar(',');
		_putchar(' ');
		}

		}

	_putchar('\n');

	}

}

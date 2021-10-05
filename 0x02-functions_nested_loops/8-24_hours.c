#include <stdio.h>
#include "main.h"

/**
 * jack_bauer - Entry point
 *
 * Return: Always 0 (Success)
 */

void jack_bauer(void)
{
	int a, b;

	for (b = 0; b < 24; b++)
	{
		for (a = 0; a < 60; a++)
		{
		_putchar((b / 10) + '0');
		_putchar((b % 10) + '0');
		_putchar(':');
		_putchar((a / 10) + '0');
		_putchar((a % 10) + '0');
		_putchar('\n');
		}
	}

}

#include <stdio.h>
#include "main.h"

/**
 * print_rev - Entry point
 * @s: pointer
 * Return: Always 0 (Success)
 */

void print_rev(char *s)
{
	int i, j;

	j = 0;

	while (s[j] != '\0')
	j++;

	i = j - 1;

		while (i != -1)
		{
		_putchar(s[i]);
		i--;
		}

	_putchar('\n');
}
